/* 
    Demonstrate multilevel inheritance by creating a 
    class GamingYouTuber 
    that inherits from YouTuber and adds a method 
    streamGame(gameName) 
    which prints '[username] is now streaming [gameName] on [channelName]'.
*/

#include<iostream>
using namespace std;

class SocialMediaUSer
{
    protected:
    string username;
    int followers;

    public:
    SocialMediaUSer(string un , int uf)
    {
        username = un;
        followers = uf;
    }
    void displayProfile()
    {
        cout<<"Username:-"<<username<<endl;
        cout<<"Followers:-"<<followers<<endl;
    }
};

class YouTube : public SocialMediaUSer
{
    protected:
    string channelName;

    public:

    YouTube(string un, int uf, string cName) : SocialMediaUSer(un, uf)
    {
        channelName = cName;
    }
    void upload(string video)
    {
        cout<<"Video: "<<video<<"Uploaded to YouTube Channel:"<<channelName<<endl;
    }
};

class gaming_YouTuber : public YouTube
{

    public:
    gaming_YouTuber(string _un, int _uf, string cName) : YouTube(_un,_uf,cName)
    {
        //
    }
    void stream_game(string game_name)
    {
        cout<<username<<" is now streaming "<<game_name<<" on "<<channelName<<"Youtube Channel"<<endl;
    }
};
main()
{
    gaming_YouTuber my("my.exe",3500,"AnyIdea");
    my.stream_game("free fire");
    
}
