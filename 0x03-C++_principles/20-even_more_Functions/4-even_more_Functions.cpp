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

float Area_of_the_circle (float d)
{
    float A , PI = 3.14;
    A = PI * pow(d , 2) * (1.0/4);
    return A;
}
int main ()
{
    float Diameter;
    cout << "Enter the Diameter of the circle\n" ;
    cin >> Diameter;
    cout << "the area of circle is " << Area_of_the_circle(Diameter) << endl;
return 0;
}
