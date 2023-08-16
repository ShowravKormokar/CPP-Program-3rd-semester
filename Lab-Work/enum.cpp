/* // Type- 1 Enumeration Type
#include<iostream>
using namespace std;

enum week{sat, sun, mon, tue, wed, thu, fri};

int main()
{
    week today;
    today= mon;
    cout << "Today= "<< today+1<<endl;

    return 0;
}*/

//Type- 2 Changing Default Value of Enums
#include<iostream>
using namespace std;

enum seasons
{
    spring= 1,
    summer= 34,
    autumn= 9,
    winter= 32
};

int main()
{
    seasons s;
    s= summer;
    cout<<"Summer= " << s<< endl;
}
