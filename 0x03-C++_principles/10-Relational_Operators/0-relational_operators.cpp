#include <iostream>
using namespace std;

/**
 * A = 10
 * B = 20
 * 
 * A < B ---> true = 1
 * A > B ---> false = 0
 * 
 * A <= B ---> true = 1
 * A >= B ---> false = 0
 * 
 * A == B ---> false = 0
 * A != B ---> true = 1
*/

int main ()
{
    short int A, B;
    A = 5;
    B= 10;
    cout << "is 5 > 10? " << (A > B) << endl;
    cout << "is 5 < 10? " << (A < B) << endl;
    cout << "is 5 <= 10? " << (A <= B) << endl;
    cout << "is 5 >= 10? " << (A >= B) << endl;
    cout << "is 5 != 10? " << (A != B) << endl;
    cout << "is 5 == 10? " << (A == B) << endl;


}
