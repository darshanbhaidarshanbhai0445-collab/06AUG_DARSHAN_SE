/* 
    Implement hierarchical inheritance by creating an 
    InstagramInfluencer class that inherits from SocialMediaUser 
    and adds a method postStory(storyTitle) 
    which prints '[username] posted a new story: [storyTitle]'.
    
    Hint: Think about how SocialMediaUser is the parent for YouTuber, Podcast-er, and InstagramInfluencer.
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
        cout<<"Video "<<video<<"Uploaded to YouTube Channel "<<channelName<<endl;
    }
};

class podCaster : public SocialMediaUSer
{
    protected:
    string pdName;

    public:
    podCaster(string un , int uf) : SocialMediaUSer(un,uf)
    {
    	
    }

    void publish(string date)
    {
        cout<<"Episode "<<pdName<<" Published on "<<date<<endl;
    }
};

class inst_influencer : public SocialMediaUSer
{
    public:
    inst_influencer(string un , int uf) : SocialMediaUSer(un,uf)
    {

    }
    void post_story(string story)
    {
        cout<<username<<" Posted a new story: "<<story<<endl;
    
    }
};
main()
{
    inst_influencer igu("Tops.exe",35);
    igu.post_story("hello everyone"); 

}
