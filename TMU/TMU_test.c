/*
 * TMU_Challenge.c
 *
 * Created: 2/24/2020 11:25:18 AM
 * Author : Ahmed
 */ 

#include "std_types.h"
#include "DIO.h"
#include "TMU_config.h"
#include "TMU.h"

/*IDs of test tasks*/
#define TEST1_ID		(0)
#define TEST2_ID		(1)

/*Periods of test tasks*/
#define TEST1_PERIOD	(5)
#define TEST2_PERIOD	(10)

/*Function test 1*/
void func_test1(void)
{
	DIO_Toggle(GPIOA , PIN0);
	return;
} 

/*Function test 2*/
void func_test2(void)
{
	DIO_Toggle(GPIOA , PIN1);
	return;
}

/*Initialization of TMU configuration struct*/
TMU_ConfigType ST_TMU_INIT = TMU_CONFIG_DATA;

/*Initialization of the two tasks*/
Task_ConfigType Task1 = {TEST1_ID,func_test1,PERIODIC_CALLING,TEST1_PERIOD};
Task_ConfigType Task2 = {TEST2_ID,func_test2,PERIODIC_CALLING,TEST2_PERIOD};

int main(void)
{
	/*Initialization of DIO pins*/
	DIO_init(GPIOA , PIN0 , OUTPUT);
	DIO_init(GPIOA , PIN1 , OUTPUT);

	/*Initialization of TMU module and its tasks*/
	TMU_Init(&ST_TMU_INIT);
	TMU_Start_Timer(&Task1);
	TMU_Start_Timer(&Task2);
	while(1) 
    {
		/*Calling the dispatcher*/
		TMU_Dispatch();
    }
}