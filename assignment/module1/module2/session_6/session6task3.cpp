/*Build a 'Guess the Song' game like Spotify —
the program randomly picks a song name from a list and asks the user to guess it.
Use a do-while loop so the user can keep guessing until they get it right.
<br><br><em><strong>Constraint:</strong> Use at least 3 song names of your choice.</em>*/

#include<stdio.h>
main()
{
	char song[3][50]={"Tip Tip Barsa Paani","Garmi","Aaj Mausam Bada Beimaan Hai"};
   	int number;
   	
   	printf("\n press 1 to Monsoon \n press 2 to summer \n press 3 to winter ");
   	printf("\n enter your choice favorite season number to take hint : ");
   	scanf("%d",&number);
   	
   	switch(number)
   	{
   		case 1:
   		{
			   int done=0;
   			printf("\n Hint:\n \nYeh 90s ka ek bahut hi iconic baarish wala gaana hai, \n jisme Akshay Kumar aur Raveena Tandon hain.");
			printf("\n based on monsoon  T-- --- ----- ----i\n");
   			do
			{
				printf("\n guess the song please = ");
				scanf("  %s",&song);
				
				if(song[0][0]=='t' && song[0][1]=='a')
				{
					done=1;	
				}else
				{
				printf("\n sorry you are worng try again...... and ");
					}	
			}while(done==0);
			
			
				printf("\n \n");
				printf("...........congractulation you are won this game..................");
			break;
		}	
		
   		case 2:
   		{
			   int done=0;
   			
			printf("Hint: Badshah aur Neha Kakkar ka gaya hua yeh ek superhit dance track hai,\n jisme Nora Fatehi aur Varun Dhawan hain.");
			printf("\n based on summer  g---i\n");
   			do
			{
				printf("\n guess the song please = ");
				scanf("  %s",&song);
				
				if(song[0][0]=='g' && song[0][1]=='a')
				{
					done=1;	
				}
				else
				{
				printf("\n sorry you are worng try again...... and ");
				}
					
			}while(done==0);
			
			
				printf("\n \n");
				printf("...........congractulation you are won this game..................");
			break;
		}	
		
   		case 3:
   		{
			   int done=0;
   			printf("\n Hint: Dharmendra ji ka yeh ek purana classic gaana hai, jisme mausam ko bahut 'beimaan' bataya gaya hai.");
			printf("\n based on winter A-- ------ ---- ------- --i\n");
   			do
			{
				printf("\n guess the song please = ");
				scanf("  %s",&song);
				
				if(song[0][0]=='a' && song[0][1]=='a')
				{
					done=1;	
				}else
				{
				printf("\n sorry you are worng try again...... and ");
					}	
			}while(done==0);
			
			
				printf("\n \n");
				printf("...........congractulation you are won this game..................");
			break;
		}	
		default:
			printf("\n oh");
	}
	
   	
   	
	
}
