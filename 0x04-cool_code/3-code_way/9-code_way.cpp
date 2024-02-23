#include <iostream>
using namespace std;

int read_num()
{
    int num;
    cout << "enter the positive number\n";
    cin >> num;
    return num;
}

int factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

void print_fac(int factorial)
{
    cout << "the factorial is " << factorial << endl;
}

int main()
{
    print_fac(factorial(read_num()));
    return 0;
}
