#include <iostream>
#include <cmath>
using namespace std;

/**
 * 
 * type a ; ----> a is a global var
 * 
 * type fun_name ()
 *  {
 *      type var_name ;  ----> var_name is a local var 
 *  }
 * 
 * EX:-
 * 
 * int a = 1;
 * 
 * type fun_name ()
 *  {
 *      int a =  0;
 *      
 *      cout << a << endl ; ----> a = 0 ---> local
 *      cout << ::a << endl ; ----> a = 1 ---> global
 *  }
 * 
*/

float  PI = 3.14;

float Area_of_the_circle (float l)
{
    float A;
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
