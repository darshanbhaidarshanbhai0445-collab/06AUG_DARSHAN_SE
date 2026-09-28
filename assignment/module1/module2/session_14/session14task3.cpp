/*
	Write a function formatFollowersCount(count) 
	that takes a number and returns a formatted string like Instagram: 
	1500 as '1.5K', 
	1200000 as '1.2M', 
	and numbers below 
	1000 as-is. 
	Add clear comments and use proper indentation.
*/
#include<stdio.h>
int main()
{
	float i;
	printf("Dear User Enter Your Followers:");
	scanf("%f",&i);
	
	if(i>1000000)
	{
		printf("Your Followers: %.1fM",i/1000000.0);
	}
	else if(i>=1000)
	{
		printf("Your Followers: %.1fK",i/1000.0);
	}
	else
	{
		printf("Your Followers: %.0f",i);
	}
}
