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
    
    unsigned int loan , months , pay_per_month ;

    cout << "Enter the loan amount\n" ;
    cin >> loan;
    cout << "Enter the number of months you need to expires\n" ;
    cin >> pay_per_month ;

    months = loan / pay_per_month;

    cout << "_______________________\nyou need " 
    << months << " months to expires" <<endl ;
}
