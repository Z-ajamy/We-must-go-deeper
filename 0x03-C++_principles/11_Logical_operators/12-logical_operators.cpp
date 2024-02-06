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
    a = ((5 > 6 && 7 == 7) || (1 || 0));
    cout << "((5 > 6 && 7 == 7) || (1 || 0)) = " << a << endl ;
    return 0;
}
