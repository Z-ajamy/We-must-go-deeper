#include <iostream>
using namespace std;

/**
 * 
 * if (Condition) ------------false
 *  {                           |
 *      body;                   |
 *  }                           |
 *                              |
 * else if (Condition)  <-----false
 *  {                           |
 *      body;                   |
 *  }                           |
 *                              |
 * else    <---------------------
 *  {
 *      code;
 *  }
*/

int main ()
{
    int D ;

    cout << "enter your total sales\n";
    cin >> D ;

    D /= 1000 ;

    if (D >= 1000)
    {
        D *= 10 ;
        cout << "____________\n" << D << "\n";
    }
    else if (D >= 500 && D <= 1000)
    {
        D *= 20 ;
        cout << "____________\n" << D << "\n";
    }
    else if (D >= 100 && D <= 500)
    {
        D *= 30 ;

        cout << "____________\n" << D << "\n";
    }
    else if (D >= 50 && D <= 100)
    {
        D *= 40 ;
        cout << "____________\n" << D << "\n";
    }
    else
    {
        D *= 0;
        cout << "____________\n" << D << "\n";
    }
    
    return 0;
}
