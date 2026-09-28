/*
	Create a console-based app called Music Listening 
	Logger that allows users to enter the number of minutes 
	they listened to music each day 
	for a week and stores this data in an array.
*/

#include<stdio.h>

int main()
{
	printf("\n>->->Welcome to Music Listening App<-<-<\n\n");
	
	int min[100];
	int i;
	printf("Enter the number of minutes you listen to music each days\n\n");
	for(i=1;i<=7;i++)
	{
		printf("Day %d:-",i);
		scanf("%d",&min[i]);
	}
	
	for(i=1;i<=7;i++)
	{
		printf("Your day %d music play time:- %d Minutes\n",i,min[i]);
	}
}
