/*
	Open playlist.txt in read mode (r) and 
	display each song name on a 
	separate line in the console.
*/

#include<stdio.h>
int main()
{
	FILE *ob;
	ob = fopen("playList.txt","r");
	
	char fileData[100];
	while(fgets(fileData,100,ob)!=NULL)
	{
		printf("%s",fileData);
	}	
	fclose(ob);
}
