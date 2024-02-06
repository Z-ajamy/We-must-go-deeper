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
    float length , Area , PI = 3.14;
    cout << "To calculate the area of ​​a circle inside a square, give the side length of the square\n" ;
    cin >> length;
    Area = PI * length * length * (1.0/4) ;
    cout << "the area of circle is " << Area << endl;
return 0;
}
