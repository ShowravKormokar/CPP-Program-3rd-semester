#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
public:
    friend int func(Distance d);
};
int func(Distance d)
{
    d.meter=5;
    return d.meter;
}
int main()
{
    Distance D;
    cout<<"Distance: "<<func(D);
    return 0;
}
