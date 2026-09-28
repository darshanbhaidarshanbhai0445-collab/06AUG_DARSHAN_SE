/*
	Add a menu-driven interface to your Music Listening
	Logger so users can choose to 
	log new listening minutes, 
	view their weekly summary, 
	or exit the app.
	Hint: Use a loop to repeatedly show the menu until the user selects exit.</em>
*/

#include<stdio.h>

int main()
{	
	int min[100];
	int i,choice;

	printf("----------------------------------------------\n");
	printf("Welcome to Music Listening App\n");
	printf("----------------------------------------------\n");
	while(1)
	{
		printf("Press 1 to Add your Loggs\n");
		printf("Press 2 to view Your Loggs\n");
		printf("Press 3 to Log out\n");
		printf("----------------------------------------------");
		printf("\n");
		scanf("%d",&choice);
		printf("----------------------------------------------\n");
	
	
		switch(choice)
		{
			case 1:			
				for(i=1;i<=7;i++)
			{
				
				printf("Day %d:-",i);
				scanf("%d",&min[i]);	
			}
				printf("----------------------------------------------\n");
			break ;
			
			case 2:
				printf("----------------------------------------------\n");
				printf("Your Added Log\n");
				printf("----------------------------------------------\n");
			for(i=1;i<=7;i++)
			{
				printf("Your day %d music play time:- %d Minutes\n",i,min[i]);
				printf("\n");
			}
				printf("----------------------------------------------\n");
			break;
			
			case 3:
				printf("----------------------------------------------");
				printf("\nLogging out! Visit Again\n");
				printf("----------------------------------------------");
				printf("\n");
			break;
		
			default:
				printf("----------------------------------------------");
				printf("\nError!!!! Please go with 1  or 2 or 3 only\n");
				printf("----------------------------------------------");
				printf("\n");
			break;
		}
		
			if(choice==3)
			{
		 	break;
	    	}		
  	}
}
