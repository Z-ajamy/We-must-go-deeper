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

int munths(int munths, int loan)
{
    return(loan / munths);
}

void print_pay(int pay)
{
    cout << "you need to pay " << pay << " per munth" << endl;
}

int main()
{
    print_pay(munths(read_nums("enter how many munths you need "), read_nums("enter how much you need ")));
    return 0;
}
