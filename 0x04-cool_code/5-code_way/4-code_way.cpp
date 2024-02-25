#include <iostream>
using namespace std;

enum en_month
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int read_nums(string message)
{
    int num = -1;
    cout << message << endl;
    cin >> num;
    while (num < 1 || num > 12)
    {
        cout << "Please enter a number between 1 and 12." << endl;
        cin >> num;
    }
    return num;
}

en_month month(int M)
{
    switch (M)
    {
    case 1:
        return en_month::Jan;
    case 2:
        return en_month::Feb;
    case 3:
        return en_month::Mar;
    case 4:
        return en_month::Apr;
    case 5:
        return en_month::May;
    case 6:
        return en_month::Jun;
    case 7:
        return en_month::Jul;
    case 8:
        return en_month::Aug;
    case 9:
        return en_month::Sep;
    case 10:
        return en_month::Oct;
    case 11:
        return en_month::Nov;
    case 12:
        return en_month::Dec;
    default:
        return en_month::Jan; 
    }
}

void print_month(en_month month)
{
    switch (month)
    {
    case en_month::Jan:
        cout << "January" << endl;
        break;
    case en_month::Feb:
        cout << "February" << endl;
        break;
    case en_month::Mar:
        cout << "March" << endl;
        break;
    case en_month::Apr:
        cout << "April" << endl;
        break;
    case en_month::May:
        cout << "May" << endl;
        break;
    case en_month::Jun:
        cout << "June" << endl;
        break;
    case en_month::Jul:
        cout << "July" << endl;
        break;
    case en_month::Aug:
        cout << "August" << endl;
        break;
    case en_month::Sep:
        cout << "September" << endl;
        break;
    case en_month::Oct:
        cout << "October" << endl;
        break;
    case en_month::Nov:
        cout << "November" << endl;
        break;
    case en_month::Dec:
        cout << "December" << endl;
        break;
    }
}

int main()
{
    int monthNumber = read_nums("Enter month number (1-12): ");
    print_month(month(monthNumber));
    return 0;
}
