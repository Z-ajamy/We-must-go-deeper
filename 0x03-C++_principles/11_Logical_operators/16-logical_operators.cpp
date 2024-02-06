#include <iostream>
using namespace std;
/**
 * 
 * || --> OR
 * && --> AVD 
 * ! --> NOT
 * 
*/
int main ()
{
    bool a;
    a = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && true);
    cout << "((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && true) = " << a << endl ;
    return 0;
}
