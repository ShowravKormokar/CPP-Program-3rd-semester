#include <iostream>
using namespace std;

class EvenOddFinder
{
    int n;

public:
    EvenOddFinder()
    {
        cout << "Enter the value: ";
        cin >> n;
    }
    EvenOddFinder(EvenOddFinder &ob)
    {
        n = ob.n;
    }
    void Oddfinder()
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }
    void Evenfinder()
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
    }
};

int main()
{
    EvenOddFinder obj1;
    cout << "Object-1\nOdd numbers: ";
    obj1.Oddfinder();

    EvenOddFinder obj2 = obj1;
    cout << "\nObject-2\nEven numbers: ";
    obj2.Evenfinder();
}