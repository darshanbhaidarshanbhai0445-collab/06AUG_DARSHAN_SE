/* 
    Given a file called instagram_followers.txt containing Instagram usernames (one per line), 
    write a program to count and display the total number of followers listed in the file.
    
    Constraint:Do not use any array or vector to store the names—just count as you read.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Followers_list
{    
    public:
    string str;
    int count = 1;
    public:
    Followers_list()
    {
        ifstream file("instagram_follower.txt");        
        while(getline(file,str))
        {
            cout<<str<<endl;
            count ++;
        }
        file.close();
    }
};

class Total_Followers : public Followers_list
{
    public:
    int Show_followers(int count)
    {
        cout<<"Total Followers -->"<<count;
        return count ;
    }
};
int main()
{
    Total_Followers ob;
    ob.Show_followers(ob.count);
    return 0;
}
