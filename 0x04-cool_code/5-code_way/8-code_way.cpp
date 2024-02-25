#include <iostream>
using namespace std;

bool read_nums(string masseage)
{
    float num = -1;
    cout << masseage << endl;
    cin >> num;
    while (num != 1234)
    {
        cout << "need a password" << endl;
        cin >> num;
    }
    return true;
}

void print_sallary(bool i)
{
    if (i == true)
    {
    cout << "your sallary = 5000" << endl;
    }
}
int main()
{
    print_sallary(read_nums("enter your password"));
    return 0;
}
