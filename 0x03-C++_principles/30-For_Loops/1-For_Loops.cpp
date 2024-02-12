#include <iostream>
using namespace std ;
/**
 * 
 *          for (initialization ; condition ; update)  ----true 
 *          ^                                                  |
 *          |--- {body}     <----------------------------------
 * 
 */
int main ()
{
    short int j ;
    cin >> j ;
    cout << "________\n" ;
    for (int i = j; 1 <= i ; i--)
    {
        cout << i << " \n";
    }
    return 0;
}
