#include <iostream>
using namespace std;

/**
 * 
 * type fun_name ()
 *  {
 *      code
 *  }
 * 
 * int main ()
 *  {
 *      fun_name();  ----> call the function
 *  }
 * 
*/

void fun_name (void)
{
    std::cout << "****************************\n";
    std::cout << "Name : Abd Al-rahman Ahmed." << std::endl;
    std::cout << "AGE : 21." << std::endl;
    std::cout << "City : Cairo." << std::endl;
    std::cout << "Country : Egypt." << std::endl;
    std::cout << "****************************\n";
}

#include <iostream>
int main(void)
{
    fun_name();
    return 0;
}
