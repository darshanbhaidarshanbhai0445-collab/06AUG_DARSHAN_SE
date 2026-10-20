/* 
Build a class called Instagram_Story with a protected property storyViews. 
Create a subclass called SponsoredStory that can access and display the storyViews value.
*/

#include<iostream>
using namespace std;

class Instagram_story
{
    protected:
    int views;
};

class Sponsored_story : protected Instagram_story
{
    public:
    void access()
    {
        views = 3287;
        cout<<"story views:-"<<views<<endl;
    }
};
main()
{
    Sponsored_story my;
    my.access();
}
