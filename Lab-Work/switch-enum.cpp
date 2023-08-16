#include<iostream>
using namespace std;

enum shape
{
    circle,
    rectangle,
    triangle
};

int main()
{
    cout << "Enter shape code:";
    int code;
    cin >> code;

    while(code >= circle && code <= triangle)
    {
        switch(code)
        {
        case circle:
            cout<<"The circle.";
            break;
        case rectangle:
            cout << "The rectangle.";
            break;
        case triangle:
            cout << "The triangle.";
            break;
        default:
            cout<<"Wrong!";
            break;
        }
        //cout <,"Enter shape code:";
        //cin>>code;
    }
    cout << "Bye \n";
    return 0;
}
