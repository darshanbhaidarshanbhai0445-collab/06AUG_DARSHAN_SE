/* 
    Create a class Movie with a parameterized constructor 
    and then use a copy constructor to duplicate a Movie object. 
    Print both the original and copied movie 
    details to show they are identical
*/

#include<iostream>
using namespace std;

class movie
{
    string _movie;
    float _rating;

    public:
    movie (string title,float rating)
    {
        _movie = title;
        _rating = rating;
    }

    movie(const movie &_copy)
    {
        _movie = _copy._movie;
        _rating = _copy._rating;
    }

    void showInfo()
    {
        cout<<"Movie Name:-"<<_movie<<endl;
        cout<<"Rating    :-"<<_rating<<endl;
    }
};
main()
{
    movie obj("bajrangi2",9.5);

    movie obj2 = obj;

    cout<<"Original Value"<<endl;
    obj.showInfo();
    cout<<"Copied Value"<<endl;
    obj2.showInfo();
}
