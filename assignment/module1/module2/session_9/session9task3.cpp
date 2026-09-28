/*
	Build a function that takes a 1D array of 7 integers 
	representing your daily Zomato order amounts and calculates 
	the average spend for the week.
	Hint:
	Use a loop to sum the values, then divide by the array length.
*/
#include<stdio.h>
seven()
{
	int days[7] = {10,20,30,40,50,60,70};
	float sum = 0;
	float avg_spend ;
	int i;
	for(i=0;i<7;i++)
	{
		sum = sum + days[i];
	}	
	printf("Sum:%.0f\n\n",sum);	
	avg_spend = sum/7;
	printf("Average:%.0f",avg_spend);
}
int main()
{
	seven();
	return 0;
}
