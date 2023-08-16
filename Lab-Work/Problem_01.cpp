#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    void Read1()
    {
        cout<<"Enter the roll: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin >> name;

    }
    void Dispaly()
    {
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Student Name: "<< name<< endl;
    }
};

class Exam : virtual public Student
{
public:
    int sub1, sub2, sub3;
    void Read2()
    {
        cout<<"Enter the subject-1 marks: ";
        cin >> sub1;
        cout << "Enter the subject-2 marks: ";
        cin >> sub2;
        cout << "Enter the subject-3 marks: ";
        cin >> sub3;

    }
    void DispalyA()
    {
        cout<<"Subject 1 marks: "<<sub1<<endl;
        cout<<"Subject 2 marks: "<< sub2<< endl;
        cout<<"Subject 3 marks: "<< sub3<< endl;
    }
};

class Sport : virtual public Student
{
public:
    int score;
    void Read3()
    {
        cout<<"Enter the sport score: ";
        cin >> score;

    }
    void DispalyB()
    {
        cout<<"Sports Score: "<<score<<endl;
    }

};

class Result :  public Exam, public Sport
{
public:
    int total;
    float average;
    void compute()
    {
        total= sub1 + sub2 + sub3 + score;
        average = total/4.0;
    }
    void DispalyC()
    {
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Student Name: "<< name<< endl;
        cout<<"Subject 1 marks: "<<sub1<<endl;
        cout<<"Subject 2 marks: "<< sub2<< endl;
        cout<<"Subject 3 marks: "<< sub3<< endl;
        cout<<"Sports Score: "<<score<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Average: "<<average<<endl;
    }
};

int main()
{

    Result a1;

    a1.Read1();
    a1.Dispaly();
    a1.Read2();
    a1.DispalyA();
    a1.Read3();
    a1.DispalyB();
    a1.compute();
    a1.DispalyC();

}
