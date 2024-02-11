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

    if (D == 1)
    {
        cout << "____________\nSunday\n";
    }
    else if (D == 2)
    { 
        cout << "____________\nMonday\n";
    }
    else if (D == 3)
    {
        cout << "____________\nTuesday\n";
    }
    else if (D == 4)
    {
        cout << "____________\nWednesday\n";
    }
    else if (D == 5)
    {
        cout << "____________\nThursday\n";
    }
    else if (D == 6)
    {
        cout << "____________\nFriday\n";
    }
    else if (D == 7)
    {
        cout << "____________\nSaturday\n";
    }
    else 
    {
        cout << "____________\nwrong information\n";
    }
    
    return 0;
}
