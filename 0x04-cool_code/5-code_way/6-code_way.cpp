#include <iostream>
using namespace std;

int read_nums(string masseage)
{
    float num = -1;
    cout << masseage << endl;
    cin >> num;
    while (num < 0)
    {
        cout << "need to be positive" << endl;
        cin >> num;
    }
    return num;
}

int munths(int pay, int loan)
{
    return(loan / pay);
}

void print_munths(int munths)
{
    cout << "you need " << munths << " munths" << endl;
}

int main()
{
    print_munths(munths(read_nums("enter how much you can pay "), read_nums("enter how much you need ")));
    return 0;
}
