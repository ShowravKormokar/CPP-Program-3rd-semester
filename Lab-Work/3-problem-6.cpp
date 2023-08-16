#include<iostream>
using namespace std;

class A;
class B;
class C;

class A
{
    int num1;
public:
    A()
    {
        cout << "Enter number 1: ";
        cin >> num1;
    }
    friend void average(A a, B b, C c);
};

class B
{
    int num2;
public:
    B()
    {
        cout << "Enter number 2: ";
        cin >> num2;
    }
    friend void average(A a, B b, C c);
};

class C
{
    int num3;
public:
    C()
    {
        cout << "Enter number 3: ";
        cin >> num3;
    }
    friend void average(A a, B b, C c);
};

void average(A a, B b, C c)
{
    float avg = (a.num1 + b.num2 + c.num3) / 3.0;
    cout << "Average= "<<avg<<endl;
}

int main()
{
    A x;
    B y;
    C z;
    average(x, y, z);
}

