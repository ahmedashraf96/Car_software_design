/************************************************************************/
/*                         Includes                                     */
/************************************************************************/

#include "std_types.h"
#include "Car_sm_Testing.h"
#include "car_sm_mock.h"

/************************************************************************/
/*                         General macros                               */
/************************************************************************/
#define CAR_SAFE_DISTANCE	(45)
#define CAR_TURN_DISTANCE	(25)
#define CAR_SPEED			(200)

/*Test cases counter*/
uint8_t gu8_test_cases_count = 0;

/************************************************************************/
/*                          CAR_SM functions                            */
/************************************************************************/

ERROR_STATUS Car_SM_Init(void)
{
	/*Error checking variables*/
	ERROR_STATUS err_var = E_OK;
	ERROR_STATUS err_1 = E_OK;
	ERROR_STATUS err_2 = E_OK;

	switch(gu8_test_cases_count)
	{
		case TEST_CASE_1:
			/*Initialization of ultrasonic module and validate it*/	
			err_1 = E_NOK;/*Us_Init();  returns E_NOK*/

			/*Initialization of steering module and validate it*/	
			err_2 = E_NOK;/*Steering_Init(); returns E_NOK*/

			break;

		case TEST_CASE_2:
			/*Initialization of ultrasonic module and validate it*/	
			err_1 = E_OK;/*Us_Init();  returns E_OK*/

			/*Initialization of steering module and validate it*/	
			err_2 = E_NOK;/*Steering_Init(); returns E_NOK*/

			break;

		case TEST_CASE_3:
			/*Initialization of ultrasonic module and validate it*/	
			err_1 = E_NOK;/*Us_Init();  returns E_NOK*/

			/*Initialization of steering module and validate it*/	
			err_2 = E_OK;/*Steering_Init(); returns E_OK*/

			break;

		case TEST_CASE_4:
			/*Initialization of ultrasonic module and validate it*/	
			err_1 = E_OK;/*Us_Init();  returns E_OK*/

			/*Initialization of steering module and validate it*/	
			err_2 = E_OK;/*Steering_Init(); returns E_OK*/

			break;

		default: /*Do nothing*/
			break;
	}
	
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

	switch(gu8_test_cases_count)
	{
		case TEST_CASE_1:
			/*Starting ultrasonic and validate it*/
			err_1 = E_NOK;/*Us_Trigger(); returns E_NOK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_NOK;/*Us_GetDistance(&au32_distance); returns E_NOK*/
			
			/*Sending car command and validate it*/
			err_3 = E_NOK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_NOK*/

			break;

		case TEST_CASE_2:
			/*Starting ultrasonic and validate it*/
			err_1 = E_OK;/*Us_Trigger(); returns E_OK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_NOK;/*Us_GetDistance(&au32_distance); returns E_NOK*/
			
			/*Sending car command and validate it*/
			err_3 = E_NOK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_NOK*/

			break;

		case TEST_CASE_3:
			/*Starting ultrasonic and validate it*/
			err_1 = E_NOK;/*Us_Trigger(); returns E_NOK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_OK;/*Us_GetDistance(&au32_distance); returns E_OK*/
			
			/*Sending car command and validate it*/
			err_3 = E_NOK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_NOK*/

			break;

		case TEST_CASE_4:
			/*Starting ultrasonic and validate it*/
			err_1 = E_OK;/*Us_Trigger(); returns E_OK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_OK;/*Us_GetDistance(&au32_distance); returns E_OK*/
			
			/*Sending car command and validate it*/
			err_3 = E_NOK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_NOK*/

			break;

		case TEST_CASE_5:
			/*Starting ultrasonic and validate it*/
			err_1 = E_NOK;/*Us_Trigger(); returns E_NOK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_NOK;/*Us_GetDistance(&au32_distance); returns E_NOK*/
			
			/*Sending car command and validate it*/
			err_3 = E_OK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_OK*/

			break;

		case TEST_CASE_6:
			/*Starting ultrasonic and validate it*/
			err_1 = E_OK;/*Us_Trigger(); returns E_OK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_NOK;/*Us_GetDistance(&au32_distance); returns E_NOK*/
			
			/*Sending car command and validate it*/
			err_3 = E_OK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_OK*/

			break;

		case TEST_CASE_7:
			/*Starting ultrasonic and validate it*/
			err_1 = E_NOK;/*Us_Trigger(); returns E_NOK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_OK;/*Us_GetDistance(&au32_distance); returns E_OK*/
			
			/*Sending car command and validate it*/
			err_3 = E_OK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_OK*/

			break;

		case TEST_CASE_8:
			/*Starting ultrasonic and validate it*/
			err_1 = E_OK;/*Us_Trigger(); returns E_OK*/
			
			/*Getting the distance of ultrasonic and validate it*/
			err_2 = E_OK;/*Us_GetDistance(&au32_distance); returns E_OK*/
			
			/*Sending car command and validate it*/
			err_3 = E_OK;/*Steering_SteerCar(CAR_FORWARD , CAR_SPEED); returns E_OK*/

			break;

		default: /*Do nothing*/
			break;
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