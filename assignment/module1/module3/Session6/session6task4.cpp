/*  Refactor the following code so that the 
    user’s phone number in the UserProfile class is private and 
    can only be set or retrieved using public methods
    Hint:Add private access modifier to the phone number and 
        create setPhoneNumber() and getPhoneNumber() methods.
*/

#include<iostream>
using namespace std;

class UserProfile
{
    private:
    long long phone;
    public:
    void setPhoneNumber()
    {
        phone = 9525864567;
    }

    void getPhoneNumber()
    {
        cout<<"phone:-"<<phone;
    }
};

int main()
{
  UserProfile up;
  up.setPhoneNumber();  
  up.getPhoneNumber();
 
}
