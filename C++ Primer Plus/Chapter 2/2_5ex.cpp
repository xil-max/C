#include<iostream>

double temp_trans(int ctemp);

using namespace std;

int main() 
{
    int cnum;
    cout << "Please enter a Celsius value: ";
    cin >> cnum;

    double fnum = temp_trans(cnum);

    cout << cnum << " degrees Celsius is " << fnum << " degrees Fahrenheit" << endl;
    return 0;
}

double temp_trans(int ctemp)
{
    double ftemp = ctemp * 1.8 + 32.0;
    return ftemp;
}
