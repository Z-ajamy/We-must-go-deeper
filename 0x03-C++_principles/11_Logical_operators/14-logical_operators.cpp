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
    a = (!(5 > 6 && 7 ==7) || !(0 || 1));
    cout << "!(8 < 6) = " << a << endl ;
    return 0;
}
