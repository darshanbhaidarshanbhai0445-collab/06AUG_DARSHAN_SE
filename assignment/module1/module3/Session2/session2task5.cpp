/* 
    Refactor your FoodOrder class so that the constructor takes an object as a parameter 
    (with keys orderId, restaurantName, isDelivered) 
    instead of separate arguments. 
    Update your instantiation code to use this new constructor signature.
*/

#include<iostream>
using namespace std;


struct Order_data
{
    int o_id;
    string hotel;
    bool isDelivered;
};

class foodOrder
{
    int order_id ;
    string hotel_name ;
    bool isDelivered ;

    public:

    foodOrder(Order_data data)
    {
        order_id = data.o_id;
        hotel_name = data.hotel;
        isDelivered = data.isDelivered;
    }

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
    Order_data my = {150,"burger mall",false};

    foodOrder y(my);
    y._order();
    y._order_status();
    y.markDelivered();
    y._order_status();
}
