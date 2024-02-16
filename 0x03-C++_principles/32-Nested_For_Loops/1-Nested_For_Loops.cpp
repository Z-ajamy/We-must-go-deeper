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

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
