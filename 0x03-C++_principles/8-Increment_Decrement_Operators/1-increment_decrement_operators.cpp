#include <iostream>
using namespace std;

/**
 * A = 10 
 * A++ = ++A = 11
 * 
 * A = 10 
 * A-- = --A = 9
 *  
 * A = 10
 * C = ++A --> C = 11 , A = 11
 * C = A++ --> C = 10 , A = 11
 * 
 * A = 10
 * C = --A --> C = 9 , A = 9
 * C = A++ --> C = 10 , A = 9
*/

int main ()
{
    short int c, a ;
    a = 10 ;
    c = a++ ;
    cout << c << endl << a << endl ;
    a = 10 ;
    c = ++a ;
    cout << c << endl << a << endl ;

    a = 10 ;
    c = a-- ;
    cout << c << endl << a << endl ;
    a = 10 ;
    c = --a ;
    cout << c << endl << a << endl ;
}
