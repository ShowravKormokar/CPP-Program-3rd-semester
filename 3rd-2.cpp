#include<iostream>
#include<conio.h>
using namespace std;

void sumNum(int x, int y);
void largeNum(int u, int v);
void evenOdd(int p, int q);

main()
{
    int a, b;
    cout<< "Enter the value of a and b:"<< endl;
    cin >> a >> b;

    sumNum(a, b);
    largeNum(a, b);
    evenOdd(a, b);

    return 0;
}

void sumNum(int x, int y)
{
    int sum = x+y;
    cout << "Sum = "<<sum<<endl;

}
void largeNum(int u, int v)
{
    (u>v)? cout<<"Large number= "<<u<<endl : cout<<"Large number= "<<v<<endl;
}
void evenOdd(int p, int q)
{
    (p&2!= 0)?cout<<"a is an odd number."<< endl : cout<<"a is even number."<< endl;
    (q&2!= 0)? cout<<"b is an odd number."<< endl : cout<<"b is even number."<< endl;
}
