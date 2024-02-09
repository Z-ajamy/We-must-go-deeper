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

float Area_of_the_circle (float l)
{
    float A , PI = 3.14;
    A = pow(l , 2) * (1.0/(4 * PI));
    return A;
}

int main ()
{
    float l;
    cout << "To calculate the area of ​​a circle by Along the Circumference, give the Along the Circumference\n" ;
    cin >> l;
    cout << "the area of circle is " << Area_of_the_circle(l) << endl;
return 0;
}
