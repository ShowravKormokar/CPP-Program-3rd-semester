#include <iostream>    // include iostream library
using namespace std;    // specifying namespace std

int main()      // main function
{
    cout << "Hello World!" << endl;   // 'endl'- is a library function. That's create a new line. Work like a '\n'.
    cout << "I am learning c++\n";    // print message on console
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
    return 0;
}

/*
#include<iostream>

int main()
{
    std::cout << "Hello World!\n";
    return 0;
}
*/
