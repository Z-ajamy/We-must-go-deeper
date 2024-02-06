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
    unsigned int loan , months , months_to_done ;

    cout << "Enter the loan amount\n" ;
    cin >> loan;
    cout << "Enter the number of months\n" ;
    cin >> months ;

    months_to_done = loan / months;

    cout << "__________________\nTime until the loan expires\n" 
    << months_to_done << endl ;
    return 0 ;
}
