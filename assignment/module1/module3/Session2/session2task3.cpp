/* 
    Create a class called FoodOrder with properties: 
    orderId (number), 
    restaurantName (string), 
    and isDelivered (boolean). 
    Write a member function 
    markDelivered()
    that sets isDelivered to true and prints a message.
    Instantiate FoodOrder and call markDelivered().
*/

#include<iostream>
using namespace std;

class foodOrder
{
    protected:
    int order_id = 94 ;
    string hotel_name = "Food Bar";
    bool isDelivered = false;

    public:
    void markDelivered()
    {
        isDelivered = true;
        cout<<"Order has been successfully delivered"<<endl;
    }

    void _order()
    {
        cout<<"Order Id: "<<order_id<<endl;
        cout<<"Hotel Name: "<<hotel_name<<endl;
    }

    void _order_status()
    {
        if(isDelivered)
        {
            cout<<"Order is Delivered"<<endl;
        }
        else
        {
            cout<<"Order is Pending"<<endl;
        }
    }
};

main()
{
    foodOrder yummy;
    yummy._order();
    yummy._order_status();
    yummy.markDelivered();
    yummy._order_status();
}
