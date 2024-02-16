#include <iostream>
using namespace std;
/**
 * 
 * int i; -------> initialization 
 * 
 * while (condition)
 *  {
 *      body;
 *      continue; -------------> dont read the following code in the loop
 *  }
 * 
*/
int main ()
{
    int a , n = 0;
    cout << "enter positive number\n";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if ((i%2) == 0)
        {
            continue;
        }
        if (i == 1)
        {
            cout << "_____________________\n";
        }
        cout << i << endl;
        n++;
    }
    cout << "_____________________\nnumber of odd number is " << n << endl ;
    return 0;
}
