#include <iostream>
using namespace std;

enum en_day
{
    Sun = 1,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int read_nums(string masseage)
{
    float num = -1;
    cout << masseage << endl;
    cin >> num;
    while ((num <= 0 || num >= 8))
    {
        cout << "need to be between 1 --> 7" << endl;
        cin >> num;
    }
    return num;
}

en_day day(int D)
{
    if (D == 1)
    {
        return en_day::Sun;
    }
    else if (D == 2)
    {
        return en_day::Mon;
    }
    else if (D == 3)
    {
        return en_day::Tue;
    }
    else if (D == 4)
    {
        return en_day::Wed;
    }
    else if (D == 5)
    {
        return en_day::Thu;
    }
    else if (D == 6)
    {
        return en_day::Fri;
    }
    else
    {
        return en_day::Sat;
    }
}

void print_day(en_day day)
{
    if (day == en_day::Sun)
    {
        cout << "____________\nSunday\n";
    }
    else if (day == en_day::Mon)
    {
        cout << "____________\nMonday\n";
    }
    else if (day == en_day::Tue)
    {
        cout << "____________\nTuesday\n";
    }
    else if (day == en_day::Wed)
    {
        cout << "____________\nWednesday\n";
    }
    else if (day == en_day::Thu)
    {
        cout << "____________\nThursday\n";
    }
    else if (day == en_day::Fri)
    {
        cout << "____________\nFriday\n";
    }
    else if (day == en_day::Sat)
    {
        cout << "____________\nSaturday\n";
    }
}

int main()
{

    print_day(day(read_nums("enter day number between 1 --> 7")));
    return 0;
}
