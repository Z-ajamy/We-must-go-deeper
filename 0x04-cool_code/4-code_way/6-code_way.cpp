#include <iostream>
using namespace std;

int read_nums()
{
    int num;
    cin >> num;
    return num;
}
int loop_sum ()
{
    int sum = 0;
    int num;

    do
    {
        num = read_nums();
        if (num == -99)
        {
            break;
        }
        sum += num;
    } while (num != -99);
    
    return sum;
}

void print_sum(int sum)
{
    cout << "the sum is = " << sum << endl;
}

int main()
{
    cout << "enter your numbers to sum to -99 " << endl;
    print_sum(loop_sum());
    return 0;
}
