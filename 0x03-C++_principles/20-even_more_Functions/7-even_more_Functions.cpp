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

float Area_of_the_circle (float b , float l)
{
    float A , PI = 3.14;
    A =  PI * pow(b , 2) * (1.0/4) * ((2* l - b) / (2* l + b));
    return A;
}

int main ()
{
    float bise , length;
    cout << "To calculate the area of ​​a circle Inscribed in an Isosceles Triangle, give the Along the bise\n" ;
    cin >> bise;
    cout << "give me the length\n";
    cin >> length;

    cout << "the area of circle is " << Area_of_the_circle(bise , length) << endl;
return 0;
}
