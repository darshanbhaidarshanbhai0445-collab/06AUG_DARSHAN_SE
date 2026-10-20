/* 
    Create a text file called my_fav_songs.txt and write the names of your 5 favorite songs into it using ofstream.
*/

#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ofstream my("my_fav_songs.txt",ios::app);
    cout<<"File is Created"<<endl;

    my<<"Below is My favorite songs"<<endl;
    my<<"----------------------------"<<endl;

    my<<"1. Blinding Lights - The Weeknd"<<endl;
    my<<"2. Levitating - Dua Lipa"<<endl;
    my<<"3. Shape of You - Ed Sheeran"<<endl;
	my<<"4. Stay - The Kid LAROI & Justin Bieber"<<endl;
	my<<"5. Watermelon Sugar - Harry Styles"<<endl;
    cout<<"Data inserted in file successfully"<<endl;
} 
