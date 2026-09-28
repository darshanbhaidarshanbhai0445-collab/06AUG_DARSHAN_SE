/*
	Create a file called 
	playlist.txt and write the names 
	of your top 3 favorite songs from 
	Spotify into it using write mode (w).
*/

#include<stdio.h>
int main()
{
	FILE *ob;
	ob = fopen("playList.txt","w");
	//printf("-----File Created-----");
	fprintf(ob,"Fav Song:1<<<Bohemian Rhapsody by Queen>>>\n");
	fprintf(ob,"Fav Song:2<<<Imagine by John Lennon>>>\n");
	fprintf(ob,"Fav Song:3<<<Billie Jean by Michael Jackson>>>\n");
	
	fclose(ob);
	printf("Yoo Done");	
}
