//Modify your pyramid pattern code to accept the number of rows as user input, 
//so the user can set the height of the pyramid before printing.
#include<stdio.h>
main()
{
	int number;
	printf("enter number of row ");
	scanf("%d",&number);
	
	for(int i=1; i<=number; i++)
	{
		for(int j=1; j<=number-i; j++)
		{
			printf(" ");
		}
		
		for(int k=1; k<=i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
