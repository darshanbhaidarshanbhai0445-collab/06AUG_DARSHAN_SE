/* 
    Build a YouTuber class that inherits from SocialMediaUser and 
    adds a property channelName and a method uploadVideo(title) 
    that prints 'Video [title] uploaded to [channelName]'.
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
        cout<<"Video '"<<video<<"' Uploaded to YouTube Channel: "<<channelName<<endl;
    }
};
main()
{
    YouTube ytu("my.exe",500,"hello code");
    ytu.displayProfile();
    ytu.upload("Code with me");
    return 0;
}
