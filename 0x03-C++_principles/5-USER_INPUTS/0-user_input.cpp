#include <iostream>
using namespace std;
/*

type var_name;
std::cin >> var_name;

*/
int main ()
{
    int age;
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
