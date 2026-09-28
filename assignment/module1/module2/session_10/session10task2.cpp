//2.Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.
#include<stdio.h>
#include<string.h>
main()
{
	char u1[10],u2[10];
	printf("\n username 1:");
	scanf("%s",&u1);
	printf("\n username 2:");
	scanf("%s",&u2);
	if(strcmp(u1,u2)==0)
	{
		printf("\n user name is same");
	}
	else
	{
		printf("\n not same please try different:");
	}
}
