/*
	Create a 2D array called 
	playlistRatings to store ratings for 3 Spotify playlists 
	over 5 days (rows = playlists, columns = days). 
	Fill it with sample numbers 
	and print the ratings for the second playlist.
*/

#include<stdio.h>
int main()
{
	int playListRatings[3][5];
	int i,j;

	for (i=0;i<3;i++)
	{
		printf("Playlist:%d\n",i+1);
		for(j=0;j<=4;j++)
		{
			printf("Day:%d\n",j+1);
			scanf("%d",&playListRatings[i][j]);
		}
	}
	printf("Ratings For 2nd PlayList\n");
	for(j=0;j<5;j++)
	{
		printf(" %d ",playListRatings[1][j]);
	}
}
