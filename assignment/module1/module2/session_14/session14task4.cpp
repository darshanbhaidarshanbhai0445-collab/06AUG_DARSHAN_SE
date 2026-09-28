/*
	You are given a piece of JavaScript code 
	that should print all even numbers from 
	1 to 10, but it doesn't work as expected:
	
	for (let i = 1; i <= 10; i++) 
	{
		if (i % 2 = 0) 
	    {
		 console.log(i)
	    }
	}
	Find and fix the error, 
	then rewrite the code with good indentation 
	and at least one comment explaining the logic.
*/

#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<=10;i++)
	{
		if(i%2==0) // Operator Error was present in javascript code
		{
			printf("%d\n",i);
		}
	}
}
