//Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and 
//use a switch-case statement to suggest a popular dish for that time.
// If the input doesn't match any meal, suggest 'Try some fruits!'.

#include<stdio.h>

main()
{
	char choice[20],set;
	
	printf("welcome to zomato-style food suggestion tool.....\n");
	printf("\n=================================================\n");
	printf("\n 'breakfast', 'lunch', 'dinner', or 'snack' \n");
	printf("\n enter your meal time = ");
	scanf("%s",&choice);
	if(choice[0]=='b' && choice[8]=='t')
	{
		set = 'b';
	}
	else if(choice[0]=='l' && choice[4]=='h')
	{
		set = 'l';
	}
	else if(choice[0]=='d' && choice[5]=='r')
	{
		set = 'd';
	}
	else if(choice[0]=='s' && choice[4]=='k')
	{
		set = 's';
	}
	
	else if(choice[0]=='D' && choice[8]=='T')
	{
		set = 'D';
	}
	else if(choice[0]=='L' && choice[4]=='H')
	{
		set = 'L';
	}
	else if(choice[0]=='B' && choice[5]=='R')
	{
		set = 'B';
	}
	else if(choice[0]=='S' && choice[4]=='K')
	{
		set = 'S';
	}
	
	switch(set)
	{
		
		case  'b':
		case 'B':
		{
			printf("\n you select breakfast\n");
			printf("\n i have today breakfast\n");
			printf("\n Breakfast: Khaman Dhokla, Poha, or Masala Dosa");
			break;
		}
		
		case  'l':
		case 'L':
		{
			printf("\n you select lunch \n");
			printf("\n i have today lunch\n");
			printf("\n Lunch: Kathiyawadi Khichdi, a full Veg Thali ");
			break;
		}
		
		case  's':
		case  'S':
		{
			printf("\n you select snack \n");
			printf("\n i have today snack\n");
			printf("\n Snack: Dabeli, Ganthiya, or Momos");
			break;
		}
		case  'd':
		case 'D':
		{
			printf("\n you select \n");
			printf("\n i have today breakfast\n");
			printf("\n Dinner: Sev Tameta nu Shaak with Roti, Dal Makhani, or Pizza");
			break;	
		}
		default:
			printf("\n Try some fruits!");
		
		
	}
}
