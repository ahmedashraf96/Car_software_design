/************************************************************************/
/*                         Includes                                     */
/************************************************************************/

#include "std_types.h"
#include "Us.h"
#include "Steering.h"
#include "car_sm.h"
#include "softwareDelay.h"

/************************************************************************/
/*                         General macros                               */
/************************************************************************/
#define CAR_SAFE_DISTANCE	(45)
#define CAR_TURN_DISTANCE	(25)
#define CAR_SPEED			(200)

/************************************************************************/
/*                          CAR_SM functions                            */
/************************************************************************/

ERROR_STATUS Car_SM_Init(void)
{
	/*Error checking variables*/
	ERROR_STATUS err_var = E_OK;
	ERROR_STATUS err_1 = E_OK;
	ERROR_STATUS err_2 = E_OK;
	
	/*Initialization of ultrasonic module and validate it*/	
	err_1 = Us_Init();

	/*Initialization of steering module and validate it*/	
	err_2 = Steering_Init();
	
	/*Validate that any function is done successfully*/
	if ( (err_1 == E_NOK || err_2 == E_NOK) )
	{
		err_var = E_NOK;
	} 
	else
	{
		err_var = E_OK;
	}
	return err_var;
}

ERROR_STATUS Car_SM_Update(void)
{
	/*Error checking variables*/
	ERROR_STATUS err_var = E_OK;
	ERROR_STATUS err_1 = E_OK;
	ERROR_STATUS err_2 = E_OK;
	ERROR_STATUS err_3 = E_OK;
	
	/*Variable used to calculate ultrasonic distance*/
	uint32_t au32_distance = 0;
	
	/*Starting ultrasonic and validate it*/
	err_1 = Us_Trigger();
	
	/*Getting the distance of ultrasonic and validate it*/
	err_2 = Us_GetDistance(&au32_distance);
	
	/*Checking the distance exceeded the car safe distance or not to keep forward*/	
	if(au32_distance > CAR_SAFE_DISTANCE)
	{
		err_3 = Steering_SteerCar(CAR_FORWARD , CAR_SPEED);
	}
	/*Turn right in case distance is less than safe distance but bigger than cat turn distance*/
	else if(au32_distance < CAR_SAFE_DISTANCE && au32_distance > CAR_TURN_DISTANCE)
	{
		err_3 = Steering_SteerCar(CAR_RIGHT , CAR_SPEED);
		softwareDelayMs(100);
	}
	/*Go backward in case the distance is less than car turn distance*/
	else if(au32_distance < CAR_TURN_DISTANCE)
	{
		err_3 = Steering_SteerCar(CAR_BACKWARD , CAR_SPEED);
		softwareDelayMs(200);
	}
	else
	{
		/*Do nothing*/
	}
	
	/*Validate that any function is done successfully*/
	if((err_1 == E_NOK) || (err_2 == E_NOK) || (err_3 == E_NOK))
	{
		err_var = E_NOK;
	}
	else
	{
		err_var = E_OK;
	}
	
	return err_var;
}