#include<iostream>
using namespace std;

class STUDENT
{
    int id1;
    string name1;
    string dept1;
    string section1;

    int id2;
    string name2;
    string dept2;

    int id3;
    string name3;
    double CGPA3;

public:
    STUDENT(int id,string name,string dept,string section)
    {
        id1=id;
        name1=name;
        dept1=dept;
        section1=section;
    }

    STUDENT(int id,string name,string dept)
    {
        id2=id;
        name2=name;
        dept2=dept;
    }

    STUDENT(int id,string name,double CGPA)
    {
        id3=id;
        name3=name;
        CGPA3=CGPA;
    }

    void display1stConstructorInfo()
    {
        cout<<"Show 1st student:\n"
            <<"ID  : "<<id1<<endl
            <<"Name: "<<name1<<endl
            <<"Dept: "<<dept1<<endl
            <<"Sec : "<<section1<<endl;
    }

    void display2ndConstructorInfo()
    {
        cout<<"Show 2nd student:\n"
            <<"ID  : "<<id2<<endl
            <<"Name: "<<name2<<endl
            <<"Dept: "<<dept2<<endl;
    }

    void display3rdConstructorInfo()
    {
        cout<<"Show 3rd student:\n"
            <<"ID  : "<<id3<<endl
            <<"Name: "<<name3<<endl
            <<"CGPA: "<<CGPA3<<endl;
    }
};

int main()
{
    cout<<"Enter 1st student's id, name, dept, section: \n";
    int id1;
    cin>>id1;
    string name1;
    cin>>name1;
    string dept1;
    cin>>dept1;
    string section1;
    cin>>section1;
    cout<<"Enter 2nd student's id, name, dept: \n";
    int id2;
    cin>>id2 ;
    string name2;
    cin>>name2 ;
    string dept2;
    cin>>dept2 ;
    cout<<"Enter 3rd student's id, name, CGPA: \n";
    int id3;
    cin>> id3;
    string name3;
    cin>>name3 ;
    double CGPA3;
    cin>>CGPA3 ;
    STUDENT ob1(id1,name1,dept1,section1),ob2(id2,name2,dept2),ob3(id3,name3,CGPA3);
    ob1.display1stConstructorInfo();
    ob2.display2ndConstructorInfo();
    ob3.display3rdConstructorInfo();
    return 0;
}
