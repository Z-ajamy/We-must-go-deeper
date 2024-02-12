#include <iostream>
using namespace std ;
/**
 * 
 * 
 *          for (initialization ; condition ; update)  ----true 
 *          ^                                                  |
 *          |--- {body}     <----------------------------------
 * 
 */
int main ()
{
    int j ;
    cin >> j ;
    for (int i = 1; i <= j ; i++)
    {
        cout << i << " \n";
    }
    return 0;
}
