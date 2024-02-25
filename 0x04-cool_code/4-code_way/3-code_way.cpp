#include <iostream>
using namespace std;

int read_num()
{
    int num = 1;
    do
    {
        cout << "enter the number\n";
        cin >> num;
    } while (num <= 0);
    return num;
}
float get_precentage(float num)
{
    if (num > 1000000)
    {
        return 0.01;
    }
    else if (num >= 500000 && num < 1000000)
    {
        return 0.02;
    }
    else if (num >= 100000 && num < 500000)
    {
        return 0.03;
    }
    else if (num >= 50000 && num < 100000)
    {
        return 0.03;
    }
    else
    {
        return 0;
    }
}

int sallary()
{
    int sallary;
    int num = read_num();
    sallary = num * get_precentage(num);
    return sallary;
}

void print_res(int num)
{
    cout << "your extra sallary is " << num << endl;
}

int main()
{
    print_res(sallary());
}
