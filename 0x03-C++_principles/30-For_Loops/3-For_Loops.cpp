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
    short int j , a = 0;
    cin >> j ;
    for (int i = 1; i <= j; i++)
    {
        if ((i % 2) == 0)
        {
            a += i;
        }
    }
    cout << a << " \n";

}
