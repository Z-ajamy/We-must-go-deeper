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
    short unsigned int age, age_after;
    cout << "inter your age\n";
    cin >> age ;
    age_after = age + 5;
    cout << "\nafter 5 years your age will be " << age_after << endl;
}
