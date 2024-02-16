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

012345678910
12345678910
2345678910
345678910
45678910
5678910
678910
78910
8910
910
10

 */

int main ()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
