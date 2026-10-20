/* 
    Write a function in Java or Python that simulates a Flipkart-style search: overload a method searchProduct() 
    to allow searching by product name or by product name and category. Demonstrate both usages with sample data.
*/

#include<iostream>
using namespace std;
class overload_1
{
    public:
    void SEARCH_PRODUCT(string product)
    {
        cout<<" ==Search Mode== Product "<<endl;
        cout<<" Searching Product:- "<<product<<endl;

    }

    void SEARCH_PRODUCT(string product , string categories)
    {
        cout<<" ===Search Mode===Product + Category "<<endl;
        cout<<" Searching Product:- "<<product <<" in category "<<categories<<endl;
    }


};

main()
{
    overload_1 my;
    my.SEARCH_PRODUCT("iphone");
    my.SEARCH_PRODUCT("iphone","Mobile");
   
}
