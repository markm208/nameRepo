#include <iostream>
using namespace std;

void printName(int year);

int main()
{
    printName(2025);
    printName(2050);
    return 0;
}
//--
void printName(int year)
{
    int age = year - 1973;
    cout<<"Mark Robert Mahoney ("<<age<<")"<<endl;
}
