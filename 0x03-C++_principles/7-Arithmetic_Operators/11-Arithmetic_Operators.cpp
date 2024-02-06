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
    float num ;
    cout << "Enter the number\n" ;
    cin >> num ;
    cout << "the power of the number " << num <<" is\n" << num * num 
    << endl << num * num * num<< endl << 
    num * num * num * num << endl;
    return 0;
}
