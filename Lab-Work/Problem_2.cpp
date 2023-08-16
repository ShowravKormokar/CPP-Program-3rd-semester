#include<iostream>
using namespace std;

class Publication
{
public:
    string title;
    int price;
    virtual void getData()
    {
        cout<<"Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin>>price;
    }
    virtual void putData()
    {
        cout<<"Enter title: "<<title<<endl;
        cout << "Enter price: "<<price<<endl;
    }
};

class Book: public Publication
{
public:
    int pageCount;
    void getData()
    {
        cout<<"Enter page: ";
        cin>>pageCount;
    }
    void putData()
    {
        cout<<"Show page: "<<pageCount<<endl;
    }
};

class Tape: public Publication
{
public:
    int time;
    void getData()
    {
        cout<<"Enter time: ";
        cin>>time;

    }
    void putData()
    {
        cout<<"Enter time: "<<time<<endl;
    }
};

int main()
{
    Publication p1, *p2;
    p2.getData();
    p2.putData();

    Book b;
    p2=&b;
    p2->getData();
    p2->putData();

    Tape t;
    p2=&t;
    p2->getData();
    p2->putData();


}
