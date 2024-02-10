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
 * 
*/
int main ()
{
    float grade [3] , t;
    cout << "give me a grade \n" ;
    cin >> grade [0] ;
    cout << "give me a grade \n" ;
    cin >> grade [1] ;
    cout << "give me a grade \n" ;
    cin >> grade [2] ;

    t = grade [0] + grade [1] + grade [2] ;
    t /=3 ;
    cout << "_______________________\nyour average is " << t << endl ;
}
