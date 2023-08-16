#include<iostream>

using namespace std;

class Car
{
private:
    string name, color;

public:
    Car(string n, string c)
    {
        name = n;
        color = c;
    }
    string getName()
    {
       return name;
    }
    string getColor()
    {
        return color;
    }
};

int main ()
{
    Car c1, c2("BMW", "Black");
     cout <<"Name: "<< c2.getName()<<endl;
    cout <<"Color: "<< c2.getColor()<<endl;
}
