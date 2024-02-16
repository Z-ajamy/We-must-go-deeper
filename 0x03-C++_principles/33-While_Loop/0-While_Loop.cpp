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
    int age;

    cout << "enter the age\n";
    cin >> age;

    while (age < 18 || age > 50)
    {
        cout << "Validate Age\n";
        cout << "enter the age\n";
        cin >> age;
    }
    return 0;
}
