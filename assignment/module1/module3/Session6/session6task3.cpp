/*     
    Imagine a Flipkart-like app: 
    create an abstract class Product with an abstract method upload(). 
    Then, create two subclasses, 
    Electronics and Clothing, 
    that each implement the upload() method to print a different upload message.
*/

#include<iostream>
using namespace std;

class product
{
    public:
    virtual void upload()= 0;
};

class electro : public product
{
    public:
    void upload () override
    {
        cout<<"electronic item added successfully:"<<endl;
    }
};

class cloth : public product
{
    public:
    void upload() override
    {
        cout<<"clothing items upload successfully"<<endl;
    }
};
main()
{
    cloth c;
    c.upload();
    electro e;
    e.upload();
    
}
