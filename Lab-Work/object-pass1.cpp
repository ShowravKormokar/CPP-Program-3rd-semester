#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{s
private:
    int real, imag;
public:
    void Road()
    {
        cout <<"Enter real and imaginary number respectively: "<<endl;
        cin >> real >> imag;
    }
    void Add(Complex comp1, Complex comp2)
    {
        real = comp1.real + comp2.real;
        imag= comp1.imag +comp2.imag;
    }
    void Display()
    {
        cout <<"Sum= "<<real<<"+" <<imag << "i";
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.Road();
    c2.Road();
    c3.Add(c1,c2);
    c3.Display();
}
