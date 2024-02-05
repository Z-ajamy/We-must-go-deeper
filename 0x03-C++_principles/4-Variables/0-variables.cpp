#include <iostream>
using namespace std;

/*
int --> 5
char --> 'A'
float --> 3.14
double --> 3.15451258438
bool --> true
string --> "abdo"
*/

int main ()
{
	string Name = "Abd al-rahman";
	int age = 21;
	string City = "Cairo";
	float monthly_salary = 7000.5;
	float yearly_salary = monthly_salary * 12;
	char gender = 'M';
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
