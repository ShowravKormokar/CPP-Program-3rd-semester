#include<iostream>
using namespace std;

class MYPROBLEM
{
public:
    void showArraySummation(int a[], int length);
    void showArraySummation(int n);
};

void MYPROBLEM::showArraySummation(int a[], int length)
{
    int sum=0;
    for(int i=0; i<length; i++)
    {
        sum+=a[i];
    }
    cout <<"Summation of array elements= "<<sum<<endl;
}

void MYPROBLEM::showArraySummation(int n)
{
    int fac=1;
    for(int i=1; i<=n; i++)
    {
        fac*=i;
    }
    cout << "Factorial= "<<fac<<endl;
}

int main()
{
    MYPROBLEM p1;
    int a[10]={1,2,3,4,5,6,7,8,9, 10};

    p1.showArraySummation(a,10);
    p1.showArraySummation(5);
}
