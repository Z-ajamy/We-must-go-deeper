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
    float num1 , num2 , num3;
    cout <<"inter the 3 numbers\n";
    cin >> num1 >> num2 >> num3;
    cout << "________________________\nthe average of " 
    << num1 <<" and " << num2 
    << " and " << num3 << " is " 
    << (num1 + num2 + num3)/3 
    << endl;
}
