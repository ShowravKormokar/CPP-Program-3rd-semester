#include<iostream>
using namespace std;

void Sum(int a, int b)
{
    cout << "Sum of integers values= "<< a+b<<endl;
}

void Sum(double a, int b)
{
    cout << "Sum of double values= "<< a+b<<endl;
}
void Sum(int a, int b, int c)
{
    cout << "Sum of 3 integers values= "<< a+b+c<<endl;
}

int main()
{
    Sum(5, 7);
    Sum(10.5, 5);
    Sum(13, 5, 7);

    return 0;
}
