#include <iostream>
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

unsigned short int rectangle_area (float a, float b)
{
    unsigned int A;
    A = a * b;
    return A;
}

int main ()
{
    unsigned short int num1 , num2 ;
    cout << "give me the The length of the rectangle\n";
    cin >> num1;
    cout << "give me the The Width of the rectangle\n";
    cin >> num2;
    cout << "the rectangle area is " << rectangle_area(num1 , num2) << endl;
return 0;
}
