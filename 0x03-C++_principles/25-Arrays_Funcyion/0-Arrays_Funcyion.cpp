#include <iostream>
#include <string>
using namespace std;

/**
 * 
 * array is a data structure creat a group of variables have the same types
 * 
 * declearing:-
 *  int array_name [num of elements] = {value1 , value2 .......} ;
 * 
 * calling elements:-
 * array_name [num of elements - 1] = new_value ;
 * ______________________________________________________
 * 
 * function:-
 * type fun_name (array_name)
 *  { code }
 * 
 * int main()
 *  {
 *      int array_name [num of elements] ;
 *      fun_name (array_name);
 *  }
*/

void cin_fun (float grade[3])
{
    cout << "give me a grade \n" ;
    cin >> grade [0] ;
    cout << "give me a grade \n" ;
    cin >> grade [1] ;
    cout << "give me a grade \n" ;
    cin >> grade [2] ;
}

float t_fun (float grade[3])
{
    float t ;
    t = grade [0] + grade [1] + grade [2] ;
    t /=3 ;
    return t;
}

int main ()
{
    float grade [3];
    cin_fun(grade);

    cout << "_______________________\nyour average is " << t_fun(grade) << endl ;

    return 0;
}
