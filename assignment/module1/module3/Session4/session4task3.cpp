/* 
    Create a Podcast-er class that also inherits from 
    SocialMediaUser and adds a property 
    podcastName and a method publishEpisode(episodeTitle) 
    that prints 'Episode [episodeTitle] published on [podcastName]'.
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
        cout<<"Video:"<<video<<"Uploaded to YouTube Channel: "<<channelName<<endl;
    }
};

class podCaster : public YouTube
{
    protected:
    string pdName;

    public:
    podCaster(string un , int uf,string cName,string epName) : YouTube(un,uf,cName)
    {
        pdName = epName;
    }

    void publish(string date)
    {
        cout<<"Episode: 0"<<pdName<<"Published on: "<<date<<endl;
    }
};


main()
{
    podCaster pdu("my.exe",2500,"AnyIdea","How to master coding in python?");
    pdu.displayProfile();
    pdu.publish("15/10/2026");
    pdu.upload("Tutorial on chatgpt");
}
