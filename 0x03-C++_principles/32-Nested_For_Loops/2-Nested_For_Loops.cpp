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
    for (char i = 65; i < 91; i++)
    {
        for (char j = 65; j < 91; j++)
        {
            cout << i << j << endl;
        }
        cout << "****************" << endl;
    }
    return 0;
}
