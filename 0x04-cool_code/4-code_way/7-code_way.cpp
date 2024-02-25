#include <iostream>
#include<cmath>
using namespace std;

enum en_prime_num {prime = 1 , not_prime = 2};

int read_nums()
{
    int num;
    do
    {
        cout << "enter the number" << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

en_prime_num prime_num(int num)
{
    int m = round(num / 2);
    for (int i = 2; i <= m; i++)
    {
        if (num % m == 0)
        {
            return en_prime_num::not_prime;
        }
    }
    return en_prime_num::prime;
}

void print_res(int num)
{
    switch (prime_num(num))
    {
    case en_prime_num::prime:
        cout << "the number is prime"  << endl;
        break;
    
    case en_prime_num::not_prime:
        cout << "the number is not prime"  << endl;
        break;
    }
}

int main ()
{
    print_res(read_nums());
}
