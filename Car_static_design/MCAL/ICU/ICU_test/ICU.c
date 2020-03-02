/************************************************************************/
/*                               Includes                               */
/************************************************************************/

#include "std_types.h"
#include "ICU_Testing.h"
#include "ICU_mock.h"
  
/************************************************************************/
/*                            ICU functions                             */
/************************************************************************/

ERROR_STATUS Icu_Init(uint8_t au8_ICU_Ch_No, uint8_t au8_ICU_Ch_Timer)
{
	ERROR_STATUS err_var = E_OK;
		
	switch(au8_ICU_Ch_No)
	{
		case ICU_CH0:
			/*Do nothing*/
			break;

		case ICU_CH1:
			/*Do nothing*/
			break;

		case ICU_CH2:
			/*Do nothing*/
			break;
		
		default: err_var = E_NOK;	
	}
	
	/*Select ICU timer channel and resetting its counter*/
	switch(au8_ICU_Ch_Timer)
	{
		case ICU_TIMER_CH0:
			/*Do nothing*/
			break;
			
		case ICU_TIMER_CH1:
			/*Do nothing*/
			break;

		case ICU_TIMER_CH2:
			/*Do nothing*/
			break;
		
		default: err_var = E_NOK;		
	}
	
	return err_var;
}

ERROR_STATUS Icu_ReadTime(uint8_t au8_ICU_Channel, uint8_t au8_ICU_EdgeToEdge, uint32_t* pu32_ICU_Time)
{
	ERROR_STATUS err_var = E_OK;
	
	if(pu32_ICU_Time != NULL)
	{		
		switch(au8_ICU_Channel)
		{
			case ICU_CH0:
				/*Do nothing*/
				switch(au8_ICU_EdgeToEdge)
				{
					case ICU_RISE_TO_RISE:
						/*Do nothing*/
						break; 

					case ICU_RISE_TO_FALL:
						/*Do nothing*/
						break;

					case ICU_FALL_TO_RISE:
						/*Do nothing*/
						break;
				
					default: err_var = E_NOK;
				}
				break;

			case ICU_CH1:			
				/*Do nothing*/
				switch(au8_ICU_EdgeToEdge)
				{
					case ICU_RISE_TO_RISE:
						/*Do nothing*/
						break; 

					case ICU_RISE_TO_FALL:
						/*Do nothing*/
						break;

					case ICU_FALL_TO_RISE:
						/*Do nothing*/
						break;
				
					default: err_var = E_NOK;
				}
				break;

			case ICU_CH2:
				/*Do nothing*/
				switch(au8_ICU_EdgeToEdge)
				{
					case ICU_RISE_TO_RISE:
						/*Do nothing*/
						break; 

					case ICU_RISE_TO_FALL:
						/*Do nothing*/
						break;

					case ICU_FALL_TO_RISE:
						/*Do nothing*/
						break;
				
					default: err_var = E_NOK;
				}
				break;
		
			default: err_var = E_NOK;	
		}
		
	}
	else
	{
		err_var = E_NOK;
	}
	
	return err_var;
}