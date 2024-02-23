#include <iostream>
using namespace std;

enum en_state {valid , invalid};

int read_age()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    return age;
}

bool validate_num(int num, int from, int to)
{
    return(num >= from && num <= to);
}

en_state is_valid (int age)
{
    if (validate_num(age , 18 , 50))
    {
        return en_state::valid;
    }
    else
        return en_state::invalid;
}

void print_result (int age)
{
    if (is_valid(age) == en_state::valid)
    {
        cout << "valid age" << endl;
    }
    else
        cout << "invalid age" << endl;
}

int main()
{
    print_result(read_age());
}
