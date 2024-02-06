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
    short int num1 , num2 , temp ;
    cout << "inter the 2 numbers to swap\n" ;
    cin >> num1 >> num2 ;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "the swap gives " << num1 << " " << num2 << endl;
    return 0;
}
