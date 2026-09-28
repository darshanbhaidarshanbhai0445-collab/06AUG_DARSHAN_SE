/*
Explain with your own example the difference between 
entry-controlled and exit-controlled loops by 
writing a short code snippet for each (for/while vs do-while) 
and describing what happens if the loop condition is false at the start.


 Entry Control Loops are: 1) while 2)for 
 Exit Control Loops are: 1)for 

 An entry-controlled loop checks the condition before running the code block,
 while an exit-controlled loop runs the code block first before checking the condition.

*/

#include<stdio.h>
int main()
{
	char i='A';
	
	while (i<='K')
	{
		printf("%c\n",i);
		i++;	
	}
	printf("\n");

	return 0;
}
