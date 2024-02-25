#include <iostream>
using namespace std;

int read_nums(string masseage)
{
    float num = -1;
    cout << masseage << endl;
    cin >> num;
    while (num <= 0)
        {
            cin >> num;
            cout << "need to be positive" << endl;
        }
    return num;
}

float week(int num)
{
    return (num / (7 * 24.0));
}

float day(int num)
{
    return (num / 24.0);
}

int main()
{
    int hours = read_nums("enter the hours");
    cout << "the days = " << day(hours) << " days" << endl;
    cout << "the weeks = " << week(hours) << " weeks" << endl;

}
