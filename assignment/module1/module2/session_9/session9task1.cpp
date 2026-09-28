/*
	Declare a 1D array called dailySteps with 7 
	elements to store your step count
	for each day of the week, 
	assign sample values, 
	and print each value using a loop.
*/
#include<stdio.h>
int main()
{
	int daily_steps[8] = {0,101,225,3000,220,440,560,770};
	int i;
	
	for(i=1;i<=7;i++)
	{
		printf("Your Day %d Step Count is:_%d\n",i,daily_steps[i]);
	}	
}
