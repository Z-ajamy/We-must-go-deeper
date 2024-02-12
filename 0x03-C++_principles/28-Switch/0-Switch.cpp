#include <iostream>
using namespace std;

/**
 * int var_name = value;
 * 
 * switch (expression)
 *  {
 *      case x :      ---------> means if (expression == x)
 *      {
 *          code
 *      }
 *      break ;
 *      
 *      case x :      ---------> means else if (expression == x)
 *      {
 *          code
 *      }
 *      break ;
 * ...............      ---------> means else if (expression == x)
 * ..............       ---------> means else if (expression == x)
 * .............        ---------> means else if (expression == x)
 * ............         ---------> means else if (expression == x)
 * 
 *      default :       --------> like else
 *      {
 *          code
 *      }
 *  }
 * _________________________________________________________________________________________
 * _________________________________________________________________________________________
 * 
 * we can use switch whith enum like if :-
 * 
 * enum en_new_data_type {case1 , case2 , case3 , .............} ;
 * 
 * int main ()
 *  {
 *      enum en_new_data_type var ;
 * 
 *      int V ;
 *      cin >> V ;
 *      var = (en_new_data_type) V ;
 *      
 *      seitch (var)
 *      {
 *          case en_new_data_type::case1:
 *          {code}
 *          break ;
 * 
 *          case en_new_data_type::case1:
 *          {code}
 *          break ;
 * .....................
 * ....................
 * ...................
 *          default:
 *          {code}
 *      }
 *  }
 * 
*/
enum enday {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} ;

int main ()
{
    enum enday day;
    short int D;

    cout << "******************\n";
    cout << "put your day\n";
    cout << "(1) Sunday\n";
    cout << "(2) Monday\n";
    cout << "(3) Tuesday\n";
    cout << "(4) Wednesday\n";
    cout << "(5) Thursday\n";
    cout << "(6) Friday\n";
    cout << "(7) Saturday\n";
    cout << "******************\n";

    cin >> D;

    day = (enday) D;

    switch (day)
    {
        case enday::Sunday:
        {
            cout << "__________________\n it's Sunday" << endl ;
        }
        break;

        case enday::Monday:
        {
            cout << "__________________\n it's Monday" << endl ;
        }
        break;

        case enday::Tuesday:
        {
            cout << "__________________\n it's Tuesday" << endl ;
        }
        break;

        case enday::Wednesday:
        {
            cout << "__________________\n it's Wednesday" << endl ;
        }
        break;

        case enday::Thursday:
        {
            cout << "__________________\n it's Thursday" << endl ;
        }
        break;

        case enday::Friday:
        {
            cout << "__________________\n it's Friday" << endl ;
        }
        break;

        case enday::Saturday:
        {
            cout << "__________________\n it's Saturday" << endl ;
        }
        break;

        default:
        cout << "Wrong choice\n";
    }
    return 0;
}
