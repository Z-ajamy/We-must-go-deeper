#include <iostream>
using namespace std;

float read_nums(string masseage)
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

float cal_pill(float pill)
{
    return ((pill * 1.1) * 1.16);
}

int main ()
{
    float pill = read_nums("enter pill number");

    cout << "the resule is " << cal_pill(pill) << endl;
    return 0;
}
