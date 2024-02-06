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
        float base , side_length , Area , PI = 3.14;
    cout << "To calculate the area of ​​a circle enclosed in an isosceles triangle, enter the base length and the side length.\n" ;
    cin >> side_length >> base;
    Area = (PI * base * base) * (1.0/4) * (2 * side_length - base) / (2 * side_length + base) ;
    cout << "the area of circle is " << Area << endl;
return 0;
}
