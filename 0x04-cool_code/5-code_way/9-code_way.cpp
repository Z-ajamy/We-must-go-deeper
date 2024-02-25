#include <iostream>
using namespace std;

bool read_nums(string masseage)
{
    int num = 0;
    cout << masseage << endl;
    cin >> num;
    int i = 0;
    while (num != 1234)
    {
        cout << "need a real password" << endl;
        cin >> num;
        if (i == 2)
        {
            return false;
        }
        i++;
    }
    return true;
}

void print_res(bool i)
{
    if (i == true)
    {
    cout << "your sallary = 5000" << endl;
    }
    else if (i == false)
        cout << "your account has blocked!!" << endl;
}
int main()
{
    print_res(read_nums("enter your password"));
    return 0;
}
