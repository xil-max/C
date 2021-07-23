#include<iostream>

void show(int h, int m);

using namespace std;

int main() 
{
    int h_num, min_num;
    cout << "Enter the number of hours: ";
    cin >> h_num;
    cin.get();
    cout << "Enter the number of minutes: ";
    cin >> min_num;
    show(h_num, min_num);
    return 0;
}

void show(int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;
}
