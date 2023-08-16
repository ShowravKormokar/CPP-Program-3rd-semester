#include<iostream>
using namespace std;

class A
{
protected:
    int p;

public:
    void set_p()
    {
        cin>>p;
    }
};

class B: protected A
{
public :
    int q;
    void set_q()
    {
        set_p();
        cin>>q;
    }
    void sum()
    {
        cout<<p+q;
    }
};
int main()
{
    B ob2;

    ob2.set_q();
    ob2.sum();
}
