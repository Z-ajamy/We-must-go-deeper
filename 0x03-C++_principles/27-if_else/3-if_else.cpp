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
    cout << "enter your password" << endl ;
    cin >> m ;

    if (m == 1234)
    {
        cout << "____________\nyour salary is 7000" << endl ;
    }
    else
    {
        cout << "____________\nwrong password" << endl ;
    }
    return 0 ;
}
