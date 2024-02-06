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
        float circumference , Area , PI = 3.14;
    cout << "To calculate the area of ​​a circle using its circumference, enter its circumference\n" ;
    cin >> circumference;
    Area = circumference * circumference / (PI*4) ;
    cout << "the area of circle is " << Area << endl;
return 0;
}
