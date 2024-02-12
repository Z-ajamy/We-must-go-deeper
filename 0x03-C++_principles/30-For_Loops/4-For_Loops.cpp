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
    short int j, a = 1;
    cin >> j;
    for (int i = 1; i <= j; i++)
    {
        a *= i;
    }
    cout << a << " \n";
}
