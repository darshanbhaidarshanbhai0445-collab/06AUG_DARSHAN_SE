/* 
    Modify your Playlist class so that it auto-saves the playlist name to a 
    file called autosave.txt when the object is destroyed, 
    simulating an auto-save feature like Spotify.
    Hint: 
    Write the file-saving code inside the destructor.</em>
*/

#include<iostream>
#include<fstream>
using namespace std;

class playList  
{
    private:
    string PL_NAME;

    public:
    playList()
    {
        PL_NAME = "kaho na kaho";
        cout<<"My playlist like:-"<<PL_NAME<<endl;
    }
    
    ~playList()
    {
        ofstream file("autosave.txt"); 
        file<<"My playList Name like:-"<<PL_NAME<<endl;
    }
};
main()
{
    playList pl;
}
