/*
	Given a 2D array called cricketScores 
	where each row represents an IPL 
	match and columns represent runs scored 
	by each team, 
	write code to print the highest score from each match.
*/

#include<stdio.h>
int main()
{
	int cricketScores[3][3];
	int i,j,high;
	
	for (i=0;i<3;i++)
	{
		printf("Number of Match:%d\n",i+1);
		for(j=0;j<3;j++)
	{
		printf("Enter Score of Team %d:",j+1);
		scanf("%d",&cricketScores[i][j]);
	}
	}
	
	printf("\tCricket Scores\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",cricketScores[i][j]);
		}
		printf("\n");	
	}	
	
	printf("Heights Cricket Scores\n");
	
	for(i=0;i<3;i++)
	{
		high = cricketScores[i][0];
		for(j=0;j<3;j++)
		{
			if(cricketScores[i][j]>high)
			{
				high = cricketScores[i][j];
			}
		}
	printf("Match %d Highest Score:%d\n",i+1,high);
	}
	return 0;
}
