#include<iostream>
using namespace std;

class Arith
{
private:
    int a, b, x, y;

public:
    int u, v, p, q;
    void sum1()
    {
        cout <<"enter a, b: ";
        cin >> a >> b;
        cout<<"Sum 1: "<<a+b<<endl;
    }

    int sum2()
    {
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
};
int main()
{
    Arith add;

    add.sum1();//No return, no argument

    cout << add.sum2()<< endl;// with return, no argument


    cout <<"enter u, v: ";
    cin >> u >> v;
    cout << add.sum3(u, v)<< endl;// with return, with argument


    cout <<"enter p, q: ";
    cin >> p>> q;
    add.sum4(p, q);// no return, with argument
}

