#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void input()
    {
        cout << "Enter your id and name : ";
        cin >> id >> name;
    }
    output()
    {
        cout << "Name: "<< name << endl<< "Id: "<< id << endl;
    }

};

int main()
{
    Student stu1, stu2;

    stu1.input();
    stu2.input();

    stu1.output();
    stu2.output();

}
