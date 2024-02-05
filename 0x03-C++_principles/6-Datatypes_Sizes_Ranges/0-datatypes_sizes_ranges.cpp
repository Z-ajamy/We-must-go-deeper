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
	string Name = "Abd al-rahman";
	unsigned short int age = 21;
	string City = "Cairo";
	float monthly_salary = 7000.5;
	float yearly_salary = monthly_salary * 12;
	unsigned char gender = 'M';
	bool married = false;

	cout << "***********************************" << endl;
	cout << "Name : " << Name << endl;
	cout << "Age : " << age << endl;
	cout << "Cite : " << City << endl;
	cout << "Monthly salary :" << monthly_salary << "\nYearly salary : " << yearly_salary << "\n";
	cout << "Gender : " << gender << endl;
	cout << "Married : " << married << endl;
	cout << "***********************************" << endl;
	return 0;
}
