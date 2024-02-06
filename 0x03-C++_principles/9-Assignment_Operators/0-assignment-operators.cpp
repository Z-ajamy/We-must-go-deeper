#include <iostream>
using namespace std;

/**
 * A = 10 
 * B = 20
 * A += B ---> A = A + B = 30
 * 
 * A = 10 
 * B = 20
 * A -= B ---> A = A - B = -10
 * 
 * A = 10 
 * B = 20
 * A *= B ---> A = A * B = 200
 * 
 * A = 10 
 * B = 20
 * A /= B ---> A = A / B = 0.1
 * 
 * A = 10 
 * B = 20
 * A %= B ---> A = A % B = 10
 * 
*/

int main ()
{
    int a , b ;
    a = 5;
    b = 3;
    a += b;
    cout << a << endl ;

    a = 5;
    b = 3;
    a -= b;
    cout << a << endl ;

    a = 5;
    b = 3;
    a *= b;
    cout << a << endl ;

    a = 5;
    b = 3;
    a /= b;
    cout << a << endl ;

    a = 5;
    b = 3;
    a %= b;
    cout << a << endl ;

    return 0;
}
