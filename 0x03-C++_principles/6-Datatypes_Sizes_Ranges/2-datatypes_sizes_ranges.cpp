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
    short unsigned int year = 21;
    cout << "after 5 years my age will be " << year + 5 <<" years old." << endl;
}
