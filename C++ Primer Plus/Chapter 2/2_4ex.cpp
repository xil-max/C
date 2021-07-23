#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "please enter your age: ";
    cin >> age;

    int month = age * 12;

    cout << "This age contains " << month << " months" << endl;
    return 0;
}
