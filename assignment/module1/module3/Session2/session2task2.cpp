/* 
    Add a member function to your Playlist class 
    named togglePublic() that switches 
    isPublic between true and false each time it is called. 
    Demonstrate by toggling the value twice and printing the result each time.
*/

#include<iostream>
#include<string>
using namespace std;

class PlayList
{
    string name = "kaho na kaho";
    string date = "15 - 10 - 2026";
    bool isPublic = false;
    
    public:
    void show()
    {
        cout<<"******************************"<<endl;
        cout<<"PlayList Name: "<<name<<endl;
        cout<<"Created on: "<<date<<endl;

        if (isPublic)
            cout<<"Playlist is public"<<endl;
        else 
            cout<<"Playlist is private"<<endl;
        cout<<"*******************************"<<endl;
    }

    void togglePublic()
    {
        isPublic = !isPublic;
       
    }
};

main()
{
    PlayList s;

    for(int i=0;i<10;i++)
    {
        s.show();
        s.togglePublic();
    }
}
