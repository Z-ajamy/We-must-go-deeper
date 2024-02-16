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
 * 
 *               **********
 *               *********
 *               ********
 *               *******
 *               ******
 *               *****
 *               ****
 *               ***
 *               **
 *               *
 */

int main ()
{
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
