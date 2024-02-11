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
    short int D ;
    cout << "enter your degree\n";
    cin >> D ;

    if (D >= 90 && D <= 100)
    {
        cout << "____________\nA\n";
    }
    else if (D >= 80 && D <= 90)
    {
        cout << "____________\nB\n";
    }
    else if (D >= 70 && D <= 80)
    {
        cout << "____________\nC\n";
    }
    else if (D >= 50 && D <= 60)
    {
        cout << "____________\nE\n";
    }
    else
    {
        cout << "____________\nF\n";
    }
    
    return 0;
}
