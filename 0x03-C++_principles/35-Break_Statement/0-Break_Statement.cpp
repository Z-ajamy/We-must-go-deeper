#include <iostream>
using namespace std;
/**
 * 
 * int i; -------> initialization 
 * 
 * while (condition)
 *  {
 *      body;
 *      break; -------------> Exit the loop
 *  }
 * 
*/

int main ()
{
    int lengh , num , i;
    int arr[100];

    cout << "enter number of numbers you need" << endl;
    cin >> lengh;
    cout << "enter the numbers\n";
    for (i = 0; i < lengh; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number whose order you want to know\n";
    cin >> num;
    for (i = 0; i < lengh; i++)
    {
        if (arr[i] == num)
        {
            break;
        }
    }
    cout << "The order of entry was " << (i + 1) << endl;
    return 0;
}
