/*Task 1: Grade Band Checker
Build a console program that accepts a student's percentage score and prints their letter
grade along with a short motivational message.
Accept a float percentage value as user input using scanf().
Assign a grade using if-else if: A (>= 90), B (>= 75), C (>= 60), D (>= 45), F (below 45).
Print the assigned grade and a one-line message for each band (e.g., 'B — Good work! Keep
pushing.').
Handle invalid input: if the score is outside the range 0–100, print a clear error message and
exit the program gracefully.

*/
#include<stdio.h>

main()
{
	printf("Grade Band Checker.........\n");
	float pr;
	printf("\n enter your percentage = ");
	scanf("%f",&pr);

if(pr>= 0 && pr<=100)
{
	
	if(pr >= 90)
	{
		printf("\n your pr is = %.2f ",pr);
		printf("\n your grade is A - Outstanding performance! Keep up the excellent work.");
	}
	
	else if(pr >=75)
	{
		printf("\n your pr is = %.2f ",pr);
		printf("\n your grade is B - Good work! Keep pushing.");
	}
	
	else if(pr >= 60)
	{
		printf("\n your pr is = %.2f ",pr);
		printf("\n your grade is C - Fair effort! With a little more practice, you can do even better.");
	}

	else if(pr >= 45)
	{
		printf("\n your pr is = %.2f ",pr);
		printf("\n your grade is D - You passed, but there is definitely room for improvement.");
	}
	
	else 
	{
		printf("\n your pr is = %.2f ",pr);
		printf("\n your grade is F - Don't give up! Review the concepts and try again.");
	}	  
}	
else
{
	printf("invalid input: score is outside the range 0 – 100 = %.0f ",pr);
	
}
	
}
