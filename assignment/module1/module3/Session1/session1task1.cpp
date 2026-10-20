//Write a simple C program tasklist_c.c that allows you to 
//add up to 5 tasks (as strings) to a global array and print all tasks using a for loop.

#include<stdio.h>
#include<string.h>
char task[20][20];

main()
{
	for(int i=0; i<5; i++)
	{
	printf("\n enter your task %d ", i+1);
	gets(task[i]);
	}
	
	printf("\n........TASK..........");

	for(int i1=0; i1<5; i1++)
	{
	printf("\n %d = ",i1+1);
	puts(task[i1]);
	}
	
}

