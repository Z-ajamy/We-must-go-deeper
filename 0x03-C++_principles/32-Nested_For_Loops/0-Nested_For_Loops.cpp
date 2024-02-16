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
    for (int i = 0; i <= 12; i++)
    {
        for (int j = 0; j <= 12; j++)
        {
            cout << i << " * " << j << " = " << i *j << endl;
        }
        if (i != 12)
        {
            cout << "*********************\n\n";
        }
    }
    return 0;
}
