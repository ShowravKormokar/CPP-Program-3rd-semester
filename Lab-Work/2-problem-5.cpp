#include<iostream>

using namespace std;

enum Week
{
    fri=1, sat=2, sun=3, mon=4, tue=5, wed=6, thu=7
};

int main()
{
    int n;
    cout<<"Enter day number(1-7): ";
    cin >> n;
    cout << fri;

    (n==fri || n==sat)? cout<<"Today is Off day.\n":cout<<"Today is Working day.\n";
}
