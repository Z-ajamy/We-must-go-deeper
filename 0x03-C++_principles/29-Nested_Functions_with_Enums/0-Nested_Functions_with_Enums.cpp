#include <iostream>
using namespace std;

/**
 * 
 * enum en_new_data_type {case1 , case2 , case3 , .............} ;
 * 
 * enum en_new_data_type read()
 *  {
 *      int C ;
 *      cin >> C ;
 *      return (en_new_data_type) C ;
 *  }
 * 
 * type1 fun(enum en_new_data_type read)
 *  {
 *      switch(read)
 *          {
 *              case x:              ---------> means if (expression == x)
 *                  {
 *                      code ;
 *                      return val;
 *                  }
 *               ...............      ---------> means else if (expression == x)
 *               ..............       ---------> means else if (expression == x)
 *               .............        ---------> means else if (expression == x)
 *               ............ 
 *          }
 *  }
 * 
 * int main ()
 *  {
 *      fun(read()) ; -----> هيستدعي الداله الداخليه قبل الخارجيه 
 *      return 0;
 *  }
 *      
*/

enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

void day_Menue ()
{
    cout << "************************" << endl;
    cout << "       Week Days        " << endl;
    cout << "************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of day?" << endl;
}

enum enWeekDay day ()
{
    short int D ;
    cin >> D ;
    return (enWeekDay)D ;
}

string DayName (enum enWeekDay day)
{
    switch (day)
    {
    case enWeekDay::Sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuesday";
        break;
    case enWeekDay::Wed:
        return "Wednesday";
        break;
    case enWeekDay::Thu:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Sat:
        return "Saturday";
        break;
    
    default:
        return "wrong information!" ;
        break;
    }
}

int main ()
{
    day_Menue();
    cout << DayName(day()) << endl ;
    return 0 ;
}
