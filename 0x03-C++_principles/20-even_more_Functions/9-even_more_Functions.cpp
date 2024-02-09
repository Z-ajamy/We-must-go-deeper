#include <iostream>
#include <cmath>
using namespace std;

/**
 * 
 * type_return fun_name (Parameter1 , Parameter2)
 *  {
 *      code
 *      return value;
 *  }
 * 
 * int main ()
 *  {
 *      fun_name();  ----> call the function to return the value
 *  }
 * 
 * void procedure_name (Parameter1 , Parameter2) -----> procedure
 * 
 * type_return fun_name (Parameter1 , Parameter2) -----> function
 * 
*/

void pow_2_3_4 (int num)
{
    cout << "the power of the number " << num <<" is\n" << num * num 
    << endl << num * num * num<< endl << 
    num * num * num * num << endl;
}

int main ()
{
    int num;
    cout << "Enter the number\n" ;
    cin >> num ;
    pow_2_3_4 (num);
    return 0;
}
