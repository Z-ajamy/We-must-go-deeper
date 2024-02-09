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

int Rectangle_area_Through_Diagonal_and_Side_Area (int a , int d)
{
    int A;
    A = a * sqrt(pow(d , 2) - pow(a , 2));
    return A;
}
int main ()
{
    unsigned short int d , a ;
    cout << "give me the The length of the Diagonal\n";
    cin >> d;
    cout << "give me the The Width of the Side Area\n";
    cin >> a;
    cout << "the rectangle area is " << Rectangle_area_Through_Diagonal_and_Side_Area (a , d) << endl;
return 0;
}
