#include <iostream>
using namespace std;

/**
 * 
 * if (Condition) ------------false
 *  {                           |
 *      body;                   |
 *  }                           |
 *                              |
 *      else    <----------------
 * 
*/

int main ()
{
    short int m ;
    cout << "enter your age" << endl ;
    cin >> m ;

    if (m >= 18 && m <= 50)
    {
        cout << "____________\nValid age" << endl ;
    }
    else
    {
        cout << "____________\nUnvalid age" << endl ;
    }
    return 0 ;
}
