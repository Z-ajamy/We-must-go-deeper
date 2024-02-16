#include <iostream>
using namespace std;

/**
 *
 *          for (int i = 0; i < Length; i++)
 *              {
 *                  for (int j = 0; j < Length; j++)
 *                      {
 *                          {body1}
 *                      }
 *                  {body2}
 *              }
 *

0123456789
012345678
01234567
0123456
012345
01234
0123
012
01
0

 */

int main ()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= (10 - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
