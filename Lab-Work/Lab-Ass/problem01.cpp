#include <iostream>
using namespace std;

class Area
{
    int length, breadth;

public:
    Area()
    {
        length = 5;
        breadth = 2;
    }
    Area(int len, int bre)
    {
        length = len;
        breadth = bre;
    }
    void getLength()
    {
        cout << "Length= " << length << endl;
        cout << "Breadth= " << breadth << endl;
    }
    int areaCalculation()
    {
        int area = length * breadth;
        return area;
    }
    void displayArea(int temp)
    {
        cout << "Area = " << temp << endl;
    }
};

int main()
{
    Area a1;
    cout << "Area-1 " << endl;
    a1.getLength();
    a1.displayArea(a1.areaCalculation());

    Area a2(2, 2);
    cout << "\nArea-2 " << endl;
    a2.getLength();
    a2.displayArea(a2.areaCalculation());
}