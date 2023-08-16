#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    //void display
    virtual void display()
    {
        cout <<"I am a Person.\n";
    }
};

class Student: public Person
{
public:
    void display()
    {
        cout <<"I am a Student.\n";
    }
};

class Teacher: public Person
{
public:
    void display()
    {
        cout <<"I am a Teacher.\n";
    }
};

int main()
{
    Person p, *p2;
    Student s;
    Teacher t;

    p.display();
    s.display();
    t.display();

    cout<<"Using Pointer:\n";
    p2=&s;
    p2 -> display(); //because using pointer & the display function set be virtual function.

    p2=&t;
    p2 -> display();

    getch();
    exit(0);
    return 0;
}
