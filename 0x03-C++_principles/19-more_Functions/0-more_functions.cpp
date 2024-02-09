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

void procedure_sum ()
{
    int a , b , r;
    cout << "inter your number" << endl ;
    cin >> a;
    cout << "inter your second number" << endl ;
    cin >> b;
    r = a + b;

    cout << "______________\n" << r << endl ;
}

int main ()
{
    procedure_sum();
    return 0;
}
