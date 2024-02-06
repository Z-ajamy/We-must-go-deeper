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
    float Diameter , Area , PI = 3.14;
    cout << "Enter the diameter of the circle\n" ;
    cin >> Diameter;
    Area = PI * Diameter * Diameter * (1.0/4) ;
    cout << "the area of circle is " << Area << endl;
return 0;
}
