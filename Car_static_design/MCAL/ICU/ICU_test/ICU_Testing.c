#include "stdio.h"
#include "std_types.h"
#include "ICU_Testing.h"
#include "ICU_mock.h"

/*Valid and Invalid parameters*/
#define VALID_ICU_CHANNEL       (ICU_CH0)
#define INVALID_ICU_CHANNEL     (3)

#define VALID_TIMER_CHANNEL     (ICU_TIMER_CH0)
#define INVALID_TIMER_CHANNEL   (3)

#define VALID_ICU_EDGE          (ICU_RISE_TO_RISE)
#define INVALID_ICU_EDGE        (3)

#define VALID_PTR_ADDRESS       (&gu32_test_var)
#define INVALID_PTR_ADDRESS     (NULL)


uint8_t gu8_test_cases_count = 0;
uint32_t gu32_test_var = 0;

int main(void)
{
    ERROR_STATUS test_case_result = 0;

    /*Car_SM_Init function test cases*/
    printf("Testing ICU_Init function>>>\n");

    for (gu8_test_cases_count = TEST_COUNTER_INIT ; gu8_test_cases_count <= ICU_INIT_TEST_CASES_NUM ; gu8_test_cases_count++)
    {
        switch(gu8_test_cases_count)
        {
            case VALID_ICU_VALID_TIMER_CHANNELS:
                test_case_result = Icu_Init(VALID_ICU_CHANNEL , VALID_TIMER_CHANNEL);
                
                if(test_case_result == ICU_INIT_CASE_1_RESULT)
                {
                    printf("Test case 1 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 1 Result: FAILED!\n");
                }
                
                break;

            case VALID_ICU_INVALID_TIMER_CHANNELS:
                test_case_result = Icu_Init(VALID_ICU_CHANNEL , INVALID_TIMER_CHANNEL);
                
                if(test_case_result == ICU_INIT_CASE_2_RESULT)
                {
                    printf("Test case 2 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 2 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_VALID_TIMER_CHANNELS:
                test_case_result = Icu_Init(INVALID_ICU_CHANNEL , VALID_TIMER_CHANNEL);
                
                if(test_case_result == ICU_INIT_CASE_3_RESULT)
                {
                    printf("Test case 3 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 3 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_INVALID_TIMER_CHANNELS:
                test_case_result = Icu_Init(INVALID_ICU_CHANNEL , INVALID_TIMER_CHANNEL);
                
                if(test_case_result == ICU_INIT_CASE_4_RESULT)
                {
                    printf("Test case 4 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 4 Result: FAILED!\n");
                }

                break;

            default: /*Do nothing*/
                break;       
        }
    }

    /*Car_SM_Init function test cases*/
    printf("Testing ICU_ReadTime function>>>\n");

    for (gu8_test_cases_count = TEST_COUNTER_INIT ; gu8_test_cases_count <= ICU_READ_TIME_TEST_CASES_NUM ; gu8_test_cases_count++)
    {
        switch(gu8_test_cases_count)
        {
            case VALID_ICU_CHANNEL_VALID_ICU_EDGE_VALID_PTR_ADD:
                test_case_result = Icu_ReadTime(VALID_ICU_CHANNEL , VALID_ICU_EDGE , VALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_1_RESULT)
                {
                    printf("Test case 1 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 1 Result: FAILED!\n");
                }
                
                break;

            case VALID_ICU_CHANNEL_VALID_ICU_EDGE_INVALID_PTR_ADD:
                test_case_result = Icu_ReadTime(VALID_ICU_CHANNEL , VALID_ICU_EDGE , INVALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_2_RESULT)
                {
                    printf("Test case 2 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 2 Result: FAILED!\n");
                }

                break;

            case VALID_ICU_CHANNEL_INVALID_ICU_EDGE_VALID_PTR_ADD:
                test_case_result = Icu_ReadTime(VALID_ICU_CHANNEL , INVALID_ICU_EDGE , VALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_3_RESULT)
                {
                    printf("Test case 3 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 3 Result: FAILED!\n");
                }

                break;

            case VALID_ICU_CHANNEL_INVALID_ICU_EDGE_INVALID_PTR_ADD:
                test_case_result = Icu_ReadTime(VALID_ICU_CHANNEL , INVALID_ICU_EDGE , INVALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_4_RESULT)
                {
                    printf("Test case 4 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 4 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_CHANNEL_VALID_ICU_EDGE_VALID_PTR_ADD:
                test_case_result = Icu_ReadTime(INVALID_ICU_CHANNEL , VALID_ICU_EDGE , VALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_5_RESULT)
                {
                    printf("Test case 5 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 5 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_CHANNEL_VALID_ICU_EDGE_INVALID_PTR_ADD:
                test_case_result = Icu_ReadTime(INVALID_ICU_CHANNEL , VALID_ICU_EDGE , INVALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_6_RESULT)
                {
                    printf("Test case 6 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 6 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_CHANNEL_INVALID_ICU_EDGE_VALID_PTR_ADD:
                test_case_result = Icu_ReadTime(INVALID_ICU_CHANNEL , INVALID_ICU_EDGE , VALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_7_RESULT)
                {
                    printf("Test case 7 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 7 Result: FAILED!\n");
                }

                break;

            case INVALID_ICU_CHANNEL_INVALID_ICU_EDGE_INVALID_PTR_ADD:
                test_case_result = Icu_ReadTime(INVALID_ICU_CHANNEL , INVALID_ICU_EDGE , INVALID_PTR_ADDRESS);

                if(test_case_result == ICU_READ_TIME_CASE_8_RESULT)
                {
                    printf("Test case 8 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 8 Result: FAILED!\n");
                }

                break;

            default: /*Do nothing*/
                break;       
        }
    }

    return 0;
}