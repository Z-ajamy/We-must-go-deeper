#include <iostream>
using namespace std;
/**
 *
 *          for (initialization ; condition ; update)  ----true
 *          ^                                                  |
 *          |--- {body}     <----------------------------------
 *
 */
int fac(int j)
{
    int a = 1;
    if (j > 0)
    {
        for (int i = 1; i <= j; i++)
        {
            a *= i;
        }
        return a;
    }
    else
    {
        cout << "enter positive number\n";
        return 0;
    }
}
int main()
{
    int j;

    cin >> j;
    cout << fac(j) << endl ;
    return 0;
}
