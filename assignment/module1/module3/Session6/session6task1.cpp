/* 
    Create a class called Song in your preferred OOP language with private properties title and artist.
    Add public getter and setter methods to access and modify these properties, then create an object and update its title.
*/

#include<iostream>
using namespace std;

class Song 
{
    private:
    string title,artist;

    public:
    void getter()
    {
        title = "S";
        artist = "T";
		cout<<"============"<<endl;
        cout<<"Title  : "<<title<<endl;
        cout<<"Artist : "<<artist<<endl;
    }

    void setter()
    {
        title = "K";
		cout<<"*************"<<endl;
        cout<<"Title  : "<<title<<endl;
        cout<<"Artist : "<<artist<<endl;
    }
};
int main()
{
    Song s;
    s.getter();
    s.setter();
    return 0;
}
