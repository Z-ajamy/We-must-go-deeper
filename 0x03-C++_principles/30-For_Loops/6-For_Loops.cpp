#include <iostream>
using namespace std;
/**
 *
 *          for (initialization ; condition ; update)  ----true
 *          ^                                                  |
 *          |--- {body}     <----------------------------------
 *
 */

int main()
{
    for (char i = 65; i <= 90; i++)
    {
        cout << i << endl ;
    }
    return 0 ;
}
