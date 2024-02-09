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

float tSeconds (float days , float hours ,float Minutes ,float Seconds)
{
    float TOT_Seconds;
    TOT_Seconds = Seconds + Minutes * 60 + hours * 60 * 60 + days * 60 * 60 * 24;
    return TOT_Seconds;
}

int main ()
{
    float days , hours , Minutes , Seconds ;

    cout << "Enter the time you spent on this task\n" ;
    cout << "by days ";
    cin >> days;
    cout << "by hours ";
    cin >> hours;
    cout << "by Minutes ";
    cin >> Minutes;
    cout << "by Seconds ";
    cin >> Seconds;
    
     cout << "__________________\nthe time you spent on this task is\n" 
    << tSeconds(days , hours , Minutes , Seconds) << " Seconds\n" << endl ;
}
