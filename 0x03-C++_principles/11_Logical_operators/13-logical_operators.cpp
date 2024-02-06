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
    a = (!(5 > 6 && 7 ==7) || (0 || 1));
    cout << "(!(5 > 6 && 7 ==7) || (0 || 1)) = " << a << endl ;
    return 0;
}
