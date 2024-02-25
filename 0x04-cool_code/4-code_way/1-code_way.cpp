#include <iostream>
using namespace std;

int read_pow()
{
    int num1;
    cout << "enter the power\n";
    cin >> num1;
    return num1;
}

int read_num()
{
    int num2;
    cout << "enter the number\n";
    cin >> num2;
    return num2;
}

int pow_loop(int num1, int num2)
{
    int pow_res = 1;
    for (int i = 0; i < num1; i++)
    {
        pow_res *= num2;
    }
    return pow_res;
}
void pow_print(int num)
{
    cout << "the result is " << num << endl;
}

int main()
{
    pow_print(pow_loop(read_pow(), read_num()));
    return 0;
}
