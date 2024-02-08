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
    std::cout << "my name is abdo\nI am 21 years old" << std::endl;
    std::cout << "I am learning programming" << std::endl << "my phone number is 01113510882 & 01553741778\n";
    std::cout << "I want to be software engneer, cool right."<< std::endl;
}

#include <iostream>
int main (void)
{
    fun_name();
    return 0;
}
