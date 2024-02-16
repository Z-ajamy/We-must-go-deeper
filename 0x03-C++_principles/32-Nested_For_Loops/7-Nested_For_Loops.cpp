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

ABCDEFGHIJKLMNOPQRSTUVWXYZ
ABCDEFGHIJKLMNOPQRSTUVWXY
ABCDEFGHIJKLMNOPQRSTUVWX
ABCDEFGHIJKLMNOPQRSTUVW
ABCDEFGHIJKLMNOPQRSTUV
ABCDEFGHIJKLMNOPQRSTU
ABCDEFGHIJKLMNOPQRST
ABCDEFGHIJKLMNOPQRS
ABCDEFGHIJKLMNOPQR
ABCDEFGHIJKLMNOPQ
ABCDEFGHIJKLMNOP
ABCDEFGHIJKLMNO
ABCDEFGHIJKLMN
ABCDEFGHIJKLM
ABCDEFGHIJKL
ABCDEFGHIJK
ABCDEFGHIJ
ABCDEFGHI
ABCDEFGH
ABCDEFG
ABCDEF
ABCDE
ABCD
ABC
AB
A

 */

int main ()
{
    for (char i = 0; i < 26; i++)
    {
        for (char j = 65; j <= (90 - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
