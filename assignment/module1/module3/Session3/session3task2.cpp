/* 
    Build a class Product for a Flipkart-style app with 
    a parameterized constructor that takes 
    productName, 
    price, and rating as arguments 
    and displays all details using a displayInfo() method.
*/

#include<iostream>
using namespace std;

class product
{
    string product_name;
    int product_price; 
    double product_rating;

    public:
    product(string name,int price,float rating)
    {
        product_name = name;
        product_price = price;
        product_rating = rating;
    }

     void displayInfo()
        {
            cout<<"----------product details like---------"<<endl;
            cout<<"Product Name:-"<<product_name<<endl;
            cout<<"Product's Price:-"<<product_price<<endl;
            cout<<"Product Rating:-"<<product_rating<<endl;
        }
};
main()
{
    product shop("vdrag fox",80,10.9);
    shop.displayInfo();
    
}
