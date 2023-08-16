#include<iostream>
using namespace std;

class Known
{
private:
    string name;
public:
    Known()
    {
        name="Unknown";
    }
    Known (string n)
    {
        name=n;
    }
    string Getname()
    {
        return name;
    }

};

int main()
{
    Known n1, n2("Showrav");

    cout <<"Name: "<< n1.Getname()<<endl;
    cout <<"My Name: "<< n2.Getname()<<endl;
}
