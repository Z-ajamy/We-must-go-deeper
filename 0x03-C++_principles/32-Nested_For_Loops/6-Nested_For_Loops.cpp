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
 */

int main ()
{
    for (char i = 0; i < 26; i++)
    {
        for (char j = (i + 65); j >= 65; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
