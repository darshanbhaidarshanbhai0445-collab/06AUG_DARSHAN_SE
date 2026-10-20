/* 
    Simulate a BookMyShow ticket booking by creating a Ticket class 
    that prints 'Saving your ticket...' in its destructor. 
    Create and delete a Ticket object to demonstrate the destructor lifecycle.
    
    Hint: Use the __del__ method (Python) or ~Ticket() (C++) to define the destructor.
*/

#include<iostream>
using namespace std;

class bookMyshow
{
    public:
    bookMyshow()
    {
        cout<<"Your ticket is confirmed"<<endl;
    }

    ~bookMyshow()
    {
        cout<<"Saving Your Ticket"<<endl;
    }
};
main()
{
    bookMyshow ticket;
}
