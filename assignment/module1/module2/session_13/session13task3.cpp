/*
	Add two more song names to playlist.txt 
	without deleting the existing ones 
	by opening the file in append mode (a).
*/

#include<stdio.h>
int main()
{
	FILE *ob;
	ob = fopen("playList.txt","a");
	
	fprintf(ob,"Fav Song:4<<<Hey Jude by The Beatles>>>\n");
	fprintf(ob,"Fav Song:5<<<Hotel California by the Eagles>>>\n");
	fprintf(ob,"Fav Song:5<<<Hotel California by the Eagles - love>>>\n");
	
	printf("Yoo Done");
	
	
	return 0;
}
