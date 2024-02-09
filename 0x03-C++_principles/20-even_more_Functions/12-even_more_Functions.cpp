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

void time (int Seconds)
{
    unsigned int days , hours , Minutes , result;

    days = Seconds / (60 * 60 * 24);
    result = Seconds % (60 * 60 * 24);
    hours = result / (60 * 60);
    result = result % (60 * 60);
    Minutes = result / (60);
    result = result % (60);

    cout << "__________________\nthe time you spent on this task is\n" 
    << days << " days\n" << hours << " hours\n" << Minutes << 
    " Minutes\n" << result << " Seconds" <<endl ;
}


int main ()
{
    int Seconds;

    cout << "Enter the time you spent on this task\n" ;
    cout << "by Seconds ";
    cin >> Seconds ;
    
    time(Seconds);
    return 0;
}
