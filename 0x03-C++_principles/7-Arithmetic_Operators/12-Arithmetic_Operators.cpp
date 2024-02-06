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
    float penny , nickle , dime , quarter , dollar;

    cout << "Enter what is in the piggy bank\n" ;
    cout << "by penny ";
    cin >> penny;
    cout << "by nickle ";
    cin >> nickle;
    cout << "by dime ";
    cin >> dime;
    cout << "by quarter ";
    cin >> quarter;
    cout << "by dollar ";
    cin >> dollar;

    penny = penny + nickle * 5 + dime * 10 + quarter * 25 + dollar *100 ;
    dollar = (penny / 100.0) ;

    cout << "__________________\nThe one in the piggy bank is\n" 
    << penny << " pennys\n" << dollar << 
    " dollars" << endl;
    return 0;
}
