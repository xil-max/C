#include<iostream>

void f1();
void f2();

using namespace std;

int main()
{
    f1();
    cin.get();
    f1();
    cin.get();
    f2();
    cin.get();
    f2();
    return 0;
}

void f1()
{
    cout << "Three blind mice";
}

void f2()
{
    cout << "See how they run";
}
