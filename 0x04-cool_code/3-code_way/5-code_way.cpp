#include <iostream>
using namespace std;

enum en_state
{
    valid,
    invalid
};

bool validate_num(int num, int from, int to)
{
    return (num >= from && num <= to);
}

int read_age(int &age)
{
    cout << "enter your age" << endl;
    cin >> age;
    return age;
}

int loop_age(int from, int to)
{
    int age = 0;
    do
    {
        read_age(age);
    } while (!validate_num(age, from, to));
    return age;
}

void print_result(int from, int to)
{
    loop_age(from, to);
    cout << "valid age!" << endl;
}

int main()
{
    print_result(18, 50);
}
