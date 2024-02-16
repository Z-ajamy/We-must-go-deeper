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
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ
ABCDEFGHIJK
ABCDEFGHIJKL
ABCDEFGHIJKLM
ABCDEFGHIJKLMN
ABCDEFGHIJKLMNO
ABCDEFGHIJKLMNOP
ABCDEFGHIJKLMNOPQ
ABCDEFGHIJKLMNOPQR
ABCDEFGHIJKLMNOPQRS
ABCDEFGHIJKLMNOPQRST
ABCDEFGHIJKLMNOPQRSTU
ABCDEFGHIJKLMNOPQRSTUV
ABCDEFGHIJKLMNOPQRSTUVW
ABCDEFGHIJKLMNOPQRSTUVWX
ABCDEFGHIJKLMNOPQRSTUVWXY
ABCDEFGHIJKLMNOPQRSTUVWXYZ
 */

int main ()
{
    for (char i = 0; i < 26; i++)
    {
        for (char j = 65; j <= (i + 65); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
