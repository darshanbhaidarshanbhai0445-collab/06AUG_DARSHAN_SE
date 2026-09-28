//Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') 
//and returns their initials in uppercase (e.g., 'VK'). 
//Call this function with your favorite cricketer's name and print the result.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char name[50];
void getuserinitials(char name[])
{
	
	
	char first=toupper(name[0]);
	char second;
	
	for(int i=0; name[i] != '\0'; i++)
	{
		if(name[i]==' ' && name[i+1] !='\0' && name[i+1]!=' ')
		{
			second =toupper(name[i+1]);
		}
	}
	printf("your full name is %s  ",name);
	printf("\n your initials = %c%c",first,second);
}
void virat()
{
	printf("\n enter your full name ");
	gets(name);
	 getuserinitials(name);
}
main()
{
	
	virat();
	
}
