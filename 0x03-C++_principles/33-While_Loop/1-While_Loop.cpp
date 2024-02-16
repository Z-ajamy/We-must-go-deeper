#include <iostream>
using namespace std;
/**
 * 
 * int i; -------> initialization 
 * 
 * while (condition)
 *  {
 *      body;
 *  }
 * 
 * 
 * 
*/

int main ()
{
    int num1 , num2 , A , sum;
    cout << "enter tow nums\n";
    cin >> num1 >> num2 >> A;
    sum = num1 + num2;
    if (A != 99)
    {
        while (A != 99)
    {
        sum += A;
        cin >> A;
    }
    }
    else
        sum = num1 + num2;

    cout << sum << endl;
}
