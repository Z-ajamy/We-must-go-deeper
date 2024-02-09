#include <iostream>
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
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a , b;
    cout << " inter two numbers\n";
    cin >> a >> b;
    swap(a , b);
    cout << "________________\n" << a << endl << b << endl ;

}

