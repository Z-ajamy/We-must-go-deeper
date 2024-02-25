#include <iostream>
using namespace std;

int read_nums(string masseage)
{
    float num = -1;
    cout << masseage << endl;
    cin >> num;
    while (num < 0)
    {
        cin >> num;
        cout << "need to be positive" << endl;
    }
    return num;
}

int cal(int second, int minutes, int hours, int days, int week)
{
    return (second + (minutes * 60) + (hours * 60 * 60) + (days * 60 * 60 * 24) + (week * 60 * 60 * 24 * 7));
}

int main()
{
    int second, minutes, hours, days, week, res;

    second = read_nums("enter the seconds");
    minutes = read_nums("enter the minutes");
    hours = read_nums("enter the hours");
    days = read_nums("enter the days");
    week = read_nums("enter the week");

    res = cal(second, minutes, hours, days, week);
    cout << "the result is " << res << " seconds" << endl;
}
