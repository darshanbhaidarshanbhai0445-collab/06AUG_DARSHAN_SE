/* 
    Create a class called Playlist with a default constructor 
    that sets the playlist name to 'My Fav' 
    and prints a welcome message when an object is created.
*/

#include<iostream>
using namespace std;

class playList
{
    string pl_name;
    public:
    playList()  //Default constructor
    {
        pl_name = "kaho na kaho";
        cout<<"my fev song playlist like:-"<<pl_name;
    }
};
main()
{
    playList pl;
}
