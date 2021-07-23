#include<iostream>

using namespace std;

int main()
{
    string address;
    string name;
    cout << "please enter your name: ";
    cin >> name;
    cout << "please enter your address: ";
    cin >> address;
    cout << "your name is : " << name << endl;
    cout << "and your address is : " << address;
    cin.get();
    return 0;
}
