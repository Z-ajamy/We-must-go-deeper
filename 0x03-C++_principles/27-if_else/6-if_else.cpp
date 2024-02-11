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
    int D , E ;
    char c ;
    
    cout << "enter your number\n";
    cin >> D >> E ;

    cout << "enter your operation\n";
    cin >> c ;

    if (c == '+')
    {
        cout << "____________\n" << D + E << endl;
    }
    else if (c == '-')
    {
        cout << "____________\n" << D - E << endl;
    }
    else if (c == '*')
    {
        cout << "____________\n" << D * E << endl;
    }
    else if (c == '/')
    {
        cout << "____________\n" << D / E << endl;
    }
    else
    {
        cout << "______________________\nwrong information\n";
    }

    return 0;
}
