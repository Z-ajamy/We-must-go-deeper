#include <iostream>
using namespace std;

enum en_odd_or_even {odd , even};

int read_num()
{
    int num;
    cout << "enter the number\n";
    cin >> num;
    return num;
}
en_odd_or_even check (int num)
{
    if ((num % 2) == 0)
    {
        return en_odd_or_even::even;
    }
    else
        return en_odd_or_even::odd;
}
int sum_odd(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        if (check(i) == en_odd_or_even::odd)
        {
            sum += i;
        }
    }
    return sum;
}

void print_sum (int sum)
{
    cout << "the sum is " << sum << endl;
}

int main()
{
    print_sum(sum_odd(read_num()));
    return 0;
}
