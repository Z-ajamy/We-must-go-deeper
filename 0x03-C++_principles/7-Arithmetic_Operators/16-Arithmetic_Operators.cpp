#include <iostream>
using namespace std;

/**
 * 
 * (+) Addition 
 * (-) Subtraction 
 * (*) Multiplication 
 * (/) Division 
 * (%) Modulus 
 * (++) Increment 
 * (--) Decrement 
 * 
*/

int main ()
{
    unsigned int days , hours , Minutes , Seconds , result;

    cout << "Enter the time you spent on this task\n" ;
    cout << "by Seconds ";
    cin >> Seconds ;
    
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
