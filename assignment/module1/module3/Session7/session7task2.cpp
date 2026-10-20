/* 
    Read all song names from my_fav_songs.txt using ifstream and display each song on a new line in the console.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream my("my_fav_songs.txt");
    string str;

    while(getline(my,str))
    {
        cout<<str<<endl;
    }
    
}
