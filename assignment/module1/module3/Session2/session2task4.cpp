/* 
    Extend your Playlist class to include a member function 
    addSong(songTitle) that adds the song title to 
    an array property called songs. 
    
    Demonstrate by adding three song titles and 
    displaying the updated songs list.

    Hint:Initialize songs as an empty array inside the constructor.</em>
*/

#include<iostream>
#include<string>
using namespace std;

class PlayList
{
    string name = "kaho na kaho";
    string date = "15 - 10 - 2026";
    bool isPublic = true;
    
    string songs[10];
    int song_count;

    public:

    PlayList()
    {
        song_count = 0;
    }

    void add_song (string Song_title)
    {
        if(song_count < 10)
        {
            songs[song_count] = Song_title;
            song_count++;
        }
    }

    void show()
    {
        cout<<"********************************"<<endl;
        cout<<"PlayList Name: "<<name<<endl;
        cout<<"Created on: "<<date<<endl;

        if (isPublic)
            cout<<"Playlist is public"<<endl;
        else 
            cout<<"Playlist is private"<<endl;
        cout<<"*********************************"<<endl;

        cout<<"************song list like************"<<endl;
        if(song_count == 0)
        {
            cout<<"PlayList is empty";
        }
        else
        {
            for(int i=0;i<song_count;i++)
            {
                cout <<i+1<<". "<<songs[i] <<endl;
            }
        } 
    }


};

main()
{
    PlayList e;
    e.add_song("tu janne na ");
    e.add_song("o rangrez");
    e.add_song("Mai hi hu");
    e.show();
}
