/*
	Rewrite the following code to improve its indentation 
	and add comments explaining each step, 
	so that a beginner can understand what it does:
	
	function isEven(num)
	{
		if(num%2==0)
		{
		return true;
		}
		else{return false;
	}
*/

#include<stdio.h>
#include<stdbool.h>

bool isEven(int num)
{
	if(num%2 == 0 )
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;
	number = 204;
	bool result; 
	result = isEven(number);
	printf("%s",result ? "true" : "false");
	return 0;
}
