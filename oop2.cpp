#include<iostream>
using namespace std;

class Arith
{
public:
    void Sum(int a, int b)
    {
        cout << "Sum = "<< a+b<<endl;
    }
    void Sub(int a, int b)
    {
        cout<< "Sub = "<< (a-b) << endl;
    }
    void Mul(int a, int b)
    {
        cout << "Mul = "<< a*b<<endl;
    }
    void Div(int a, int b)
    {
        cout<< "Div = "<< (a/b) << endl;
    }
};

int main()
{
    Arith add, subs;

    //int a, b;
    //cout << "Enter the value of a and b: ";
    //cin>> a >> b;

    add.Sum(10,5);
    add.Sub(10,5);
    add.Mul(10,5);
    add.Div(10,5);

    return 0;
}
