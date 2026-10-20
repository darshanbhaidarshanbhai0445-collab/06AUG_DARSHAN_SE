/* 
    Create a Content class with properties: title, platform, views, and status. Write a method to display all details of a Content object.
*/

#include<iostream>
using namespace std;

class content
{
    private:
    string title;
    string platform;
    int views;
    string status;

    public:
    void gather_DATA()
    {
        cout<<"Enter Title:";
        cin>>title;

        cout<<"Enter Platform:";
        cin>>platform;

        cout<<"Enter views:";
        cin>>views;

        cout<<"Enter Status:";
        cin>>status;
    }

    void show_DATA()
    {
        cout<<"|------ Gathered Data ------|"<<endl;
        cout<<"| Title   : "<<title<<endl;
        cout<<"| Platform: "<<platform<<endl;
        cout<<"| Views   : "<<views<<endl;
        cout<<"| Status  : "<<status<<endl;
        cout<<"|---------------------------|"<<endl;
    }
};

int main()
{
    content c;
    c.gather_DATA();
    c.show_DATA();
    return 0;
}