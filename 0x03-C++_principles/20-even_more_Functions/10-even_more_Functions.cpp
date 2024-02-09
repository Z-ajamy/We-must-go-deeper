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

float fun_pow(float num , float p )
{
    float r;
    r = pow(num , p);
    return r ;
}

int main ()
{
    float num , p;

    cout << "enter the number\n";
    cin >> num;
    cout << "enter the power\n";
    cin >> p;



    cout << "__________________\n" << floor(fun_pow(num , p)) << endl << ceil(fun_pow(num , p)) << endl << abs(fun_pow(num , p)) << endl;
    return 0;
}
