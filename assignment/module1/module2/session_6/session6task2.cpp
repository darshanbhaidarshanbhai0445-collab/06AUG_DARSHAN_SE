//Create a menu-driven console app that lets the user: 
//1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit.
// Use a while loop to keep showing the menu until the user chooses Exit.
//<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>
#include<stdio.h>

main()
{
	go:
	char add[3][20]={"csk","rcb","kkr"};
	int choice ;
	printf("\n\n===========================");
	printf("\n ----->1) View your favorite 3 IPL teams, \n ----->2) Add a new team, \n ----->3) Exit.");
	printf("\n enter your choice in number = ");
	scanf("%d",&choice);
	
	
	
	switch(choice)
	{
		case 1:
			for(int i=0;i<=3;i++)
			{
				printf("\n team is :%s",add[i]);
			}
			
			break;
			
		case 2:
			printf("\n enter new team ");
			scanf("%s",&add[3]);
			for(int i=0;i<=2;i++)
			{
				printf("\n old team is :%s",add[i]);
			}
				printf("\n new team is :%s",add[3]);
			break;
			
		case 3:
			printf("\n now you are exit.........");
			break;
		
		default:
			printf("\n not found please enter unother number.....");
			
	}
	while(choice != 3)
	{
		goto go;
		
	}
}


