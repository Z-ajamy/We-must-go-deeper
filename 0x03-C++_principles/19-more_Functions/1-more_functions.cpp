#include <iostream>
using namespace std;

/**
 * 
 * type_return fun_name ()
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
 * void fun_name () -----> procedure
 * 
 * type_return fun_name () -----> function
 * 
*/

int function_sum ()
{
     int a , b , r;
    cout << "inter your number" << endl ;
    cin >> a;
    cout << "inter your second number" << endl ;
    cin >> b;
    r = a + b;
    return (r) ;
}
int main ()
{   int r;
    r = function_sum() ;
    cout << "______________\n" << r << endl ;

}
