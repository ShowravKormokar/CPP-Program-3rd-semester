#include<iostream>
using namespace std;

class MYPROBLEM
{
public:
    int showArraySummation(int a[],int length)
    {
        int tot=0;
        for(int i=0; i<length; i++)
        {
            tot+=a[i];
        }
        return tot;
    }

    int showArraySummation(int n)
    {
        if(n==0)return 1;
        return n*showArraySummation(n-1);
    }
};

int main()
{
    MYPROBLEM ob1;
    int myArray[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum = "<<ob1.showArraySummation(myArray,10)<<endl;
    cout<<"Factorial of 5 = "<<ob1.showArraySummation(5)<<endl;
    return 0;
}
