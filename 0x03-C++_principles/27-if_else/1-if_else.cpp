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
    cout << "enter your mark" << endl ;
    cin >> m ;

    if (m >= 50)
    {
        cout << "____________\ncongratulations" << endl ;
    }
    else
    {
        cout << "_________________\nfailed" << endl ;
    }
    
    return 0 ;
}
