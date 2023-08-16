#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int id,s;
    char sec;
    string name, sem, dept;

    cout << "Enter your id: " << endl;
    cin >> id;
    cin.ignore();

    cout << "Enter your name: " << endl;
    getline(cin, name);

    cout << "Enter your semester: " << endl;
    cin >> sem;

    cout << "Enter your section: " << endl;
    cin >> sec;
    cin.ignore();

    cout << "Enter your dept. name: " << endl;
    getline(cin, dept);

    cout << "<------- Student Information -------->"<< endl;
    cout << "ID: " << id << endl
         << "Name: " << name << endl
         << "Semester: " << sem << endl
         << "Section: " << sec << endl
         << "Dept. Name: " << dept << endl;

    return 0;
}
