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
    float num1 , num2  ;
    cout << "Enter the invoice value\n" ;
    cin >> num1 ;
    cout << "Enter what the customer paid\n" ;
    cin >> num2 ;
    cout << "__________________\nThe rest of the amount is " << num2 - num1 << endl ;

    return 0;
}
