//Build a right-angled triangle pattern using nested loops, 
//where each row displays increasing numbers starting from 1, 
//similar to how a leaderboard on a gaming app shows rank numbers.
#include<stdio.h>
main()
{
	for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}
