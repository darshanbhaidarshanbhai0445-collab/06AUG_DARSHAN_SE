/*
	Build a structure called InstaProfile with fields: 
	username (string), 
	followers (integer), 
	and a nested structure Bio with 
	fields: description (string) and age (integer). 
	Initialize an InstaProfile variable with 
	your own details and display all fields.
*/

#include<stdio.h>

struct instaProfile
{
	char userName[25];
	int followers;
};

struct bio
{
	char description[100];
	int age;
	struct instaProfile pfp;
} likes;

int main()
{
	printf("Enter Your Username:");
	gets(likes.pfp.userName);
	
	printf("Enter Your Followers:");
	scanf("%d",&likes.pfp.followers);
	
	getchar();
	
	printf("Enter Your Bio:");
	gets(likes.description);
	
	printf("Enter Your Age:");
	scanf("%d",&likes.age);
	
	printf("Username:%s\n",likes.pfp.userName);
	printf("Followers:%d\n",likes.pfp.followers);
	printf("Bio:%s\n",likes.description);
	printf("Age:%d\n",likes.age);
		
	return 0;
}
