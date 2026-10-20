/*   
    Create a base class called SocialMediaUser with properties username and followers, 
    and a method displayProfile() that prints the username and follower count.
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
main()
{
    SocialMediaUSer igu("darshan.exe",2000);
    igu.displayProfile();
  
}
