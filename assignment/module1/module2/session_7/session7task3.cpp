//Create a pattern that prints a pyramid of stars (*) with 6 rows, 
//centered like the loading animation you see on BookMyShow when a page is loading.
//<br><br><em><strong>Hint:</strong> Use spaces to align the stars in the center for each row.</em>
#include<stdio.h>

main()
{
	for(int i=1; i<=6; i++)
	{
		
		for(int k=1; k<=6-i; k++)
		{
			printf(" ");
			
		}
		
		for(int j=1; j<=2*i-1; j++)
			{
				printf("*");	
			}	
		printf("\n");
	}
	
}

