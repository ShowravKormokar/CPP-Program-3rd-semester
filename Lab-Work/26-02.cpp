#include<iostream>
using namespace std;

void sum1()
{
    int a, b;
    cout <<"enter a, b: ";
    cin >> a >> b;
    cout<<"Sum 1: "<<a+b<<endl;
}

int sum2()
{
    int x, y;
    cout <<"enter x, y: ";
    cin >> x >> y;
    return x+y;
}

int sum3(int u, int v)
{
    return u+v;
}

void sum4(int p, int q)
{
    cout << "Sum 4: "<< p+q<< endl;
}

int main()
{
    sum1();//No return, no argument

    cout << sum2()<< endl;// with return, no argument

    int u, v;
    cout <<"enter u, v: ";
    cin >> u >> v;
    cout << sum3(u, v)<< endl;// with return, with argument

    int p, q;
    cout <<"enter p, q: ";
    cin >> p>> q;
    sum4(p, q);// no return, with argument
}
