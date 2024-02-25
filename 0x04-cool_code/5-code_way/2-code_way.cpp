#include <iostream>
using namespace std;

struct str_time
{
    unsigned int days, hours, Minutes, Seconds, result;
};

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

str_time str_time_fun(int seconds)
{
    str_time time;
    time.days = seconds / (60 * 60 * 24);
    time.result = seconds % (60 * 60 * 24);
    time.hours = time.result / (60 * 60);
    time.result = time.result % (60 * 60);
    time.Minutes = time.result / (60);
    time.result = time.result % (60);

    return time;
}

void print_time(str_time time)
{
    cout << time.days << " : " << time.hours << " : " << time.Minutes << " : "  << time.result << endl;
}

int main()
{
    print_time (str_time_fun(read_nums("enter your second")));
}
