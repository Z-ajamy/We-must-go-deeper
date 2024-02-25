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

float cal(float pill , float cash)
{
    return (cash - pill);
}

int main ()
{
    float pill = read_nums("enter pill number");
    float cash = read_nums("enter cash number");

    cout << "the resule is " << cal(pill , cash) << endl;
    return 0;
}
