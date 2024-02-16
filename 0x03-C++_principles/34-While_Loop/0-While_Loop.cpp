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
    do
    {
        cout << "enter the age\n";
        cin >> age;
    }while (age < 18 || age > 50);
    return 0;
}
