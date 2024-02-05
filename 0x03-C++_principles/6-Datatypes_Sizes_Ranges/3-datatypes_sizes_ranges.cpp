#include <iostream>
using namespace std;
/*

signed int = int --> 4byte
unsigned int => just positive --> 4byte
shotr int --> 2byte
long int = long = int --> 4byte
long long int --> 8byte

signed char = char --> 1byte
unsigned char => just positive --> 1byte

float --> 4byte
double --> 8byte
long double --> 12byte

bool --> 1byte

void --> 0byte

*/

int main ()
{
    unsigned short int age;
    float salary_per_month ;
    string name , city;

    cout << "input your name\n";
    cin >> name ;
    cout << "input your age\n";
    cin >> age ;
    cout << "input your salary per month\n";
    cin >> salary_per_month;
    cout << "input your city\n";
    cin >> city;

    cout << "********************\n";
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "City is : " << city << endl;
    cout << "Salary per month : " << salary_per_month << endl;
    cout << "Salary per year : " << salary_per_month * 12 << endl;
    cout << "********************\n";

return 0;
}
