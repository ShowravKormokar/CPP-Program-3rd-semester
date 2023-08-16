#include<iostream>
using namespace std;

class First
{
    int n;
public:
    void Set(int x)
    {
        n=x;
    }
    friend void Reverse(First num);
};

void Reverse(First num)
{
    int temp=num.n, sum=0, r;
    for (int i = 1; temp != 0; i++)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    cout << "Reverse of number : " << sum;
}

int main()
{
    First f;
    f.Set(123);
    Reverse(f);
}
