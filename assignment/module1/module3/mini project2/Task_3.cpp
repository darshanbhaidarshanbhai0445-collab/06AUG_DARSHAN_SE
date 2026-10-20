/* 
    Implement a function to read all content items from content_list.txt and display them in a numbered list, showing title and platform for each.
 */

#include<iostream>
#include<fstream>
using namespace std;

class content
{
    public:
    void menu()
    {
        cout<<"|============ Console Menu ==========|"<<endl;
        cout<<"| Press 1 for Add new content ideas  |"<<endl;
        cout<<"| Press 2 for view your content ideas|"<<endl;
        cout<<"| Press 3 for save entry in file     |"<<endl;
        cout<<"| Press 4 for read data from file    |"<<endl;
        cout<<"| Press 5 for log out                |"<<endl;
        cout<<"|============ ************ ==========|"<<endl;
    }

    private:
    int choice;
    string  title,platform, status;
    int views;

    public:
    void CHOICE()
    {
        while(1)
        {
            cout<<"What is your choice? --->";
            cin>>choice;
            cout<<"-------------------------"<<endl;
        
            switch(choice)
            {

                case 1:
                {
                    cout<<"What's Your Title? ---> ";
                    cin>>title;
                    
                    cout<<"What's Your Platform? ---> ";
                    cin>>platform;
                    
                    cout<<"How many views? ---> ";
                    cin>>views;
                    
                    cout<<"What's Your Status? ---> ";
                    cin>>status;

                    cout<<"-------------------------"<<endl;

                    break;
                }

                case 2:
                {
                    cout<<"Title:-"<<title<<endl;
                    cout<<"Platform:-"<<platform<<endl;
                    cout<<"Views:-"<<views<<endl;
                    cout<<"Status:-"<<status<<endl;
                    cout<<"-------------------------"<<endl;

                    break;
                }

                case 3:
                {
                    ofstream file("Content_list.txt",ios::app);
                    file<<"Title:-   "<<title<<endl;
                    file<<"Platform:-"<<platform<<endl;
                    file<<"Views:-   "<<views<<endl;
                    file<<"Status:-  "<<status<<endl;
                    file<<"-------------------------"<<endl;

                    file.close();
                    cout<<"Data Saved in file Successfully"<<endl;
                    break;
                }

                case 4:
                {
                    ifstream file("Content_list.txt");
                    if(!file)
                    {
                        cout<<"Unable to open file";
                    }

                    string titleLine;
                    string platformLine;
                    string viewsLine;
                    string statusLine;
                    string formatLine;

                    int L=1;

                    while
                        (getline(file,titleLine) &&
                        getline(file,platformLine) &&
                        getline(file,viewsLine) &&
                        getline(file,statusLine) &&
                        getline(file,formatLine))

                    {
                        cout <<L <<"."
                        <<titleLine <<" | "
                        <<platformLine <<" "
                        <<endl;
                        cout<<"-------------------------"<<endl;
                        L++;
                    }

                    if(L==1)
                    {
                        cout<<"No Available DAta"<<endl;
                        cout<<"-------------------------"<<endl;
                    }               

                        break;
                }

                case 5:
                {
                    cout<<"Exited! See You again"<<endl;
                    // cout<<"-------------------------"<<endl;
                    break;
                }

                default:
                {
                    cout<<"INVALID CHOICE ! ERROR "<<choice<<endl;
                    cout<<"-------------------------"<<endl;
                    break;
                }
            }
                
            if(choice == 5)
            {
                break;
            }
        }
    }
};
int main()
{
    content c;
    c.menu();
    c.CHOICE();
    return 0;
}