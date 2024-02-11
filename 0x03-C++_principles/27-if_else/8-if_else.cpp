#include <iostream>
using namespace std;

/**
 * 
 * enum en_new_data_type {case1 , case2 ,...........}
 * 
 * int main()
 * {
 *  enum en_new_data_type var ;
 * 
 * if (var == en_new_data_type::case1) ------------false
 *  {                                                |
 *      body;                                        |
 *  }                                                |
 *                                                   |
 * else if (var == en_new_data_type::case2)  <-----false
 *  {                                                |
 *      body;                                        |
 *  }                                                |
 *                                                   |
 * else    <------------------------------------------
 *  {
 *      code;
 *  }
 * }
*/

enum enCountryChoice { Jordan=1, Tunisa=2, Algeria=3, Oman=4, Egypt=5, Iraq=6, Other=7 };

int main ()
{
    enum enCountryChoice Country ;

    cout << "******************\n";
    cout << "put your Country\n" ;
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "******************\n";

    short int c ;

    cin >> c ;
    Country = (enCountryChoice) c ;

    if (Country == enCountryChoice::Jordan)
    {
        cout << "___________________________\nYour country is Jordan\n";
    }
    else if (Country == enCountryChoice::Tunisa)
    {
        cout << "___________________________\nYour country is Tunisa\n";
    }
    else if (Country == enCountryChoice::Algeria)
    {
        cout << "___________________________\nYour country is Algeria\n";
    }
    else if (Country == enCountryChoice::Oman)
    {
        cout << "___________________________\nYour country is Oman\n";
    }
    else if (Country == enCountryChoice::Egypt)
    {
        cout << "___________________________\nYour country is Egypt\n";
    }
    else if (Country == enCountryChoice::Iraq)
    {
        cout << "___________________________\nYour country is Iraq\n";
    }
    else 
    {
        cout << "___________________________\nwrong information\n";
    }

    return 0;
}
