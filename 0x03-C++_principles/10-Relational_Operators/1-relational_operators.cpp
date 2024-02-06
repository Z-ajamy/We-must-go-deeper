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
    
    cout << "put the first number\n";
    cin >> A;
    cout << "put the second number\n";
    cin >> B;
    
    cout << "________________________\nis " << A << " > " << B << " ? " << (A > B) << endl;
    cout << "is " << A <<" < " << B << " ? " << (A < B) << endl;
    cout << "is " << A <<" <= " << B << " ? " << (A <= B) << endl;
    cout << "is " << A <<" >= " << B << " ? " << (A >= B) << endl;
    cout << "is " << A <<" != " << B << " ? " << (A != B) << endl;
    cout << "is " << A <<" = " << B << " ? " << (A == B) << endl;
return 0;
} 
