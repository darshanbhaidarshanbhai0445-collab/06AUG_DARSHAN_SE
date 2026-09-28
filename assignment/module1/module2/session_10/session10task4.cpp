/*
	Build a small script that takes the 
	user's full name as input 
	and creates a username by copying only 
	the first 5 characters using strcpy(). 
	Print the generated username.
	Constraint:
	If the name is shorter than 5 characters, 
	use the full name as the username.
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char full_name[10];
	char username[10];
	
	int len;
	printf("Enter Your Full Name:__");
	gets(full_name);
	
	len = strlen(full_name);
	
	if (len >=5)
	{
		full_name[5] = '\0'; 
		printf("Your UserName is \n @%s",strcpy(username,full_name));
	}
	else
	{
		printf("Your Username is \n @%s",full_name);
	}
	return 0;
}
