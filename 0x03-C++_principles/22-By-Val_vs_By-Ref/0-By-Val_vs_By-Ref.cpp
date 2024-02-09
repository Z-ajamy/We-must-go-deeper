#include <iostream>
using namespace std;

/**
 * 
 * type_return fun_name (type &var_name , ...) ======> in this function we can chang the value of the Parameter
 *  {
 *      code
 *      return value;
 *  }
 * 
 * int main ()
 *  {
 *      fun_name();  ----> call the function to return the a value 
 *  }
 * 
*/
void swap (int &i , int &j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}
int main ()
{
    int num1 , num2 ; 
    cout << "give me your numbers\n";
    cin >> num1 ;
    cin >> num2 ;
    swap(num1 , num2);
    cout << "______________\n"<< num1 << endl << num2 <<endl ;
}
