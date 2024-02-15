#include <iostream>
using namespace std;
/**
 *
 *          for (int i = 0; i < Length; i++)
 *              {
 *                  array[i] ;   -----> الحلقه هتعمل مرور على كل عنصر من عناصر المصفوفه
 *              }
 *
 */

void Length_fun(float arr[100], int &Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "enter your " << i + 1 << "num\n";
        cin >> arr[i];
    }
}

void print_array(float arr[100], int Length)
{
    cout << "array data ...\n";
    for (int i = 0; i < Length; i++)
    {
        cout << "the array [" << i + 1 << "] = " << arr[i] << endl;
    }
}

float sum_array (float arr[100] , int length)
{
    float sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i]; 
    }
    return sum;
}

float avr (float sum , int length)
{
    float avrege = (sum / (float)length) ;
    return avrege;
}

int main()
{
    int Length;
    float arr[100];

    cout << "how many numbers you need ?\n";
    cin >> Length;
    Length_fun(arr, Length);
    print_array(arr , Length);
    cout << "the sum = " << sum_array(arr , Length) << endl ;
    cout << "the avrege = " << avr(sum_array (arr , Length) , Length) << endl ;
return 0;
}
