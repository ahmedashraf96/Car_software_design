#ifndef __TESTING_H__
#define __TESTING_H__

/*Test cases number*/
#define ICU_INIT_TEST_CASES_NUM                               (4)
#define ICU_READ_TIME_TEST_CASES_NUM                          (8)

/*Initializing test cases counter*/
#define TEST_COUNTER_INIT                                     (1)

/*Available test cases*/
#define TEST_CASE_1                                           (1)
#define TEST_CASE_2                                           (2)
#define TEST_CASE_3                                           (3)
#define TEST_CASE_4                                           (4)
#define TEST_CASE_5                                           (5)
#define TEST_CASE_6                                           (6)
#define TEST_CASE_7                                           (7)
#define TEST_CASE_8                                           (8)

/*ICU_Init test scenarios*/
#define VALID_ICU_VALID_TIMER_CHANNELS                        (1)
#define VALID_ICU_INVALID_TIMER_CHANNELS                      (2)
#define INVALID_ICU_VALID_TIMER_CHANNELS                      (3)
#define INVALID_ICU_INVALID_TIMER_CHANNELS                    (4)

/*ICU_Init test cases results*/
#define ICU_INIT_CASE_1_RESULT			                      (E_OK)
#define ICU_INIT_CASE_2_RESULT			                      (E_NOK)
#define ICU_INIT_CASE_3_RESULT			                      (E_NOK)
#define ICU_INIT_CASE_4_RESULT			                      (E_NOK)

/*ICU_ReadTime test scenarios*/
#define VALID_ICU_CHANNEL_VALID_ICU_EDGE_VALID_PTR_ADD        (1)
#define VALID_ICU_CHANNEL_VALID_ICU_EDGE_INVALID_PTR_ADD      (2)
#define VALID_ICU_CHANNEL_INVALID_ICU_EDGE_VALID_PTR_ADD      (3)
#define VALID_ICU_CHANNEL_INVALID_ICU_EDGE_INVALID_PTR_ADD    (4)
#define INVALID_ICU_CHANNEL_VALID_ICU_EDGE_VALID_PTR_ADD      (5)
#define INVALID_ICU_CHANNEL_VALID_ICU_EDGE_INVALID_PTR_ADD    (6)
#define INVALID_ICU_CHANNEL_INVALID_ICU_EDGE_VALID_PTR_ADD    (7)
#define INVALID_ICU_CHANNEL_INVALID_ICU_EDGE_INVALID_PTR_ADD  (8)

/*ICU_ReadTime test cases results*/
#define ICU_READ_TIME_CASE_1_RESULT			                  (E_OK)
#define ICU_READ_TIME_CASE_2_RESULT			                  (E_NOK)
#define ICU_READ_TIME_CASE_3_RESULT		                      (E_NOK)
#define ICU_READ_TIME_CASE_4_RESULT			                  (E_NOK)
#define ICU_READ_TIME_CASE_5_RESULT			                  (E_NOK)
#define ICU_READ_TIME_CASE_6_RESULT			                  (E_NOK)
#define ICU_READ_TIME_CASE_7_RESULT                           (E_NOK)
#define ICU_READ_TIME_CASE_8_RESULT			                  (E_NOK)

#endif