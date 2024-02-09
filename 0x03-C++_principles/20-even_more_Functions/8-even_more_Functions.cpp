#include <iostream>
#include <cmath>
using namespace std;

/**
 * 
 * type_return fun_name (Parameter1 , Parameter2)
 *  {
 *      code
 *      return value;
 *  }
 * 
 * int main ()
 *  {
 *      fun_name();  ----> call the function to return the value
 *  }
 * 
 * void procedure_name (Parameter1 , Parameter2) -----> procedure
 * 
 * type_return fun_name (Parameter1 , Parameter2) -----> function
 * 
*/

float Area_of_the_circle (float a , float b , float c)
{
    float A , p , PI = 3.14;
    p = (a + b +c) / 2;
    A = pow((a * b * c) / ( 4 * sqrt(p * (p - a) * (p - b) * (p - c)) ) , 2) * PI ;
    return A;
}

int main ()
{
    float a , b , c  ;

    cout << "to get  Circle Area circle Described Around an Arbitrary Triangle\ngive me the leangths of the Triangle\n";
    cin >> a >> b >> c;

    cout << "Circle Area is = " << Area_of_the_circle(a , b , c) << endl;
    return 0;
}
