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
    unsigned short int num1 = 20 , num2 = 30 , num3 = 10 , total = num1 + num2 + num3;
    cout << num1 << " +\n" << num2 << " +\n" << num3 << "\n" << "_____________\n" << "total = " << total;
    return 0;
}
