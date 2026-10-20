/* 
    Create a Java class called PaymentProcessor with 
    two overloaded methods processPayment(): 
    one that takes only an amount, 
    and one that takes amount and a coupon code. 
    Print which version is called and the final amount in each case.
*/

#include<iostream>
using namespace std;

class paymentProcessor
{
    public:
    void process_Payment(int amt)
    {
        cout << "first process successfully:-" << endl;
        cout << "amount is :-" << amt << endl;
    }

    void process_Payment(int amt,int cup_code)
    {
        cout << "second process successfully:-" <<endl;
        cout <<"amount is:-" << amt << endl <<"coupon:-"<<cup_code<<endl;
    }
};
int main()
{
    paymentProcessor my;
    my.process_Payment(40);
    cout << "******************" << endl;
    my.process_Payment(20,652535);
    return 0;
}
