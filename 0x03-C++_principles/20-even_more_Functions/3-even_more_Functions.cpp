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

float Area_of_the_circle (float r)
{
    float A , PI = 3.14;
    A = PI * pow(r , 2);
    return A;
}

int main ()
{
    float radius;
    cout << "Enter the radius of the circle\n" ;
    cin >> radius;
    cout << "the area of circle is " << Area_of_the_circle(radius) << endl;
return 0;
}
