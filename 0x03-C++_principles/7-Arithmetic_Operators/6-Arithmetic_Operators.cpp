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
    float height , base , area ;
    cout << "Enter the base and height of the triangle\n" ;
    cin >> base >> height ;
    area = base * height * (1.0/2);
    cout << "the area of triangle is " << area << endl;
    return 0;
}
