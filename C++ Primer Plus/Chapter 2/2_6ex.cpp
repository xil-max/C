#include<iostream>

double year_trans(double y);

using namespace std;

int main() 
{
    double light_year;
    cout << "Enter the number of light years: ";
    cin >> light_year;

    double astronomical_unit = year_trans(light_year);

    cout << light_year << " light years = " << astronomical_unit << " astronomical units." << endl;
    return 0; 
}

double year_trans(double y)
{
    double trans_y = y * 63240;
    return trans_y;
}
