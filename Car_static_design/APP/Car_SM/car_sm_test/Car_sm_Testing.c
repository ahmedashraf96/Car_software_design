#include "stdio.h"
#include "std_types.h"
#include "Car_sm_Testing.h"
#include "car_sm_mock.h"

extern uint8_t gu8_test_cases_count;

int main(void)
{
    ERROR_STATUS test_case_result = 0;

    /*Car_SM_Init function test cases*/
    printf("Testing Car_SM_Init function>>>\n");

    for (gu8_test_cases_count = TEST_COUNTER_INIT ; gu8_test_cases_count <= CAR_SM_INIT_TEST_CASES_NUM ; gu8_test_cases_count++)
    {
        switch(gu8_test_cases_count)
        {
            case TEST_CASE_1:
                test_case_result = Car_SM_Init();
                
                if(test_case_result == CAR_SM_INIT_CASE_1_RESULT)
                {
                    printf("Test case 1 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 1 Result: FAILED!\n");
                }
                
                break;

            case TEST_CASE_2:
                test_case_result = Car_SM_Init();

                if(test_case_result == CAR_SM_INIT_CASE_2_RESULT)
                {
                    printf("Test case 2 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 2 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_3:
                test_case_result = Car_SM_Init();

                if(test_case_result == CAR_SM_INIT_CASE_3_RESULT)
                {
                    printf("Test case 3 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 3 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_4:
                test_case_result = Car_SM_Init();

                if(test_case_result == CAR_SM_INIT_CASE_4_RESULT)
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
    printf("Testing Car_SM_Update function>>>\n");

    for (gu8_test_cases_count = TEST_COUNTER_INIT ; gu8_test_cases_count <= CAR_SM_UPDATE_TEST_CASES_NUM ; gu8_test_cases_count++)
    {
        switch(gu8_test_cases_count)
        {
            case TEST_CASE_1:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_1_RESULT)
                {
                    printf("Test case 1 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 1 Result: FAILED!\n");
                }
                
                break;

            case TEST_CASE_2:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_2_RESULT)
                {
                    printf("Test case 2 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 2 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_3:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_3_RESULT)
                {
                    printf("Test case 3 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 3 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_4:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_4_RESULT)
                {
                    printf("Test case 4 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 4 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_5:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_5_RESULT)
                {
                    printf("Test case 5 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 5 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_6:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_6_RESULT)
                {
                    printf("Test case 6 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 6 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_7:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_7_RESULT)
                {
                    printf("Test case 7 Result: PASSED!\n");  
                }
                else
                {
                    printf("Test case 7 Result: FAILED!\n");
                }

                break;

            case TEST_CASE_8:
                test_case_result = Car_SM_Update();

                if(test_case_result == CAR_SM_UPDATE_CASE_8_RESULT)
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