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
    
    Seconds = Seconds + Minutes * 60 + hours * 60 * 60 + days * 60 * 60 * 24;

     cout << "__________________\nthe time you spent on this task is\n" 
    << Seconds << " Seconds\n" << endl ;
}
