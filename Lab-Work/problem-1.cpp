#include<iostream>
using namespace std;

class Square
{
private:
    int side;
public:
    Square()//Object s1
    {
        side=2;
    }
    Square(int s)//Object s2
    {
        side =s;
    }
    int area()
    {
        return side*side;
    }
};

int main()
{
    Square s1, s2(7);

    cout << "Area= "<< s1.area()<< endl;
    cout<< "Area 2= "<<s2.area()<<endl;
}
