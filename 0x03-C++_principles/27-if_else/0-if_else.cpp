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

void if_driver (short int age)
{
    if (age >= 21)
    {
        char driver_lesance ;
        cout << "do you have lesance number ? (y / n)\n";
        cin >> driver_lesance ;

        if (driver_lesance == 'y')
        {
            cout << "______________________\ncongratulations\n";
        }
        
        else
        {
            cout << "____________\nyou need lesance number to apply\n";
        }
    }
    else
        {
            cout << "____________\nyou need to be 21y\n";
        }
}

int main ()
{
    int a;
    cout << "enter your age\n";
    cin >> a;
    if_driver (a);
    return 0;
}
