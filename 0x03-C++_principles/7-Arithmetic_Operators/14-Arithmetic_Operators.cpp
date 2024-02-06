#include <iostream>
using namespace std;

/**
 * 
 * (+) Addition 
 * (-) Subtraction 
 * (*) Multiplication 
 * (/) Division 
 * (%) Modulus 
 * (++) Increment 
 * (--) Decrement 
 * 
*/

int main ()
{
    float num1 , num2 ;
    cout << "Enter the invoice value\n" ;
    cin >> num1 ;
    num2 = num1 * (1.1) ;
    num2 = num2 * (1.16);
    cout << "__________________\nTotal invoice value is " << num2 << endl ;

    return 0;
}
