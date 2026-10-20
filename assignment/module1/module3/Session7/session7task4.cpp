/* 
    Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and prices, 
    save them to a file called wishlist.txt, then read the file and display each product with its price.
*/

#include<iostream>
#include<fstream>
using namespace std;

class wishlist
{
    public:
    string product_name;
    int product_price;
};

class tracker : public wishlist
{
    wishlist wish[10];
    public:

    void get_data()
    {
        for(int i=0;i<3;i++)
        {
            cout<<"Enter product "<<(i+1)<<" name: ";
            getline(cin, wish[i].product_name);

            cout<<"Enter product "<<(i+1)<<" price: ";
            cin>>wish[i].product_price;
            getchar();
        }
    }

    void display_data()
    {
        ofstream file("Wishlist.txt");
        cout<<"file is created"<<endl;

        for(int i=0;i<3;i++)
        {
            file<<"Product "<<(i+1)<<"'s Name: "<<wish[i].product_name<<endl;
            file<<"Product "<<(i+1)<<"'s Price: "<<wish[i].product_price<<endl;
            file<<"------------------------"<<endl;
        }
    }

    void read_data()
    {
        ifstream file("wishlist.txt");

        string str;

        while(getline(file,str))
        {
            cout<<str<<endl;
        }
    }
};

int main()
{
       tracker t;
       t.get_data();
       t.display_data();
       t.read_data();
}
