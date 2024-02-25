#include <iostream>
using namespace std;

enum en_operators
{
    add = '+',
    sub = '-',
    mul = '*',
    _div = '/',
    mod = '%'
};

int read_nums(string massage)
{
    int num;
    cout << massage << endl;
    cin >> num;
    return num;
}

en_operators operators()
{
    char op;
    do
    {
        cout << "enter operator" << endl;
        cin >> op;
        cin.ignore(INT16_MAX, '\n');
    } while (op != '+' && op != '-' && op != '*' && op != '*' && op != '/' && op != '%');

    return (en_operators)op;
}

float calculat(int num1, int num2, en_operators operators)
{
    switch (operators)
    {
    case en_operators::add:
        return (num1 + num2);
        break;
    case en_operators::sub:
        return (num1 - num2);
        break;
    case en_operators::mod:
        return (num1 % num2);
        break;
    case en_operators::_div:
        return (num1 / num2);
        break;
    case en_operators::mul:
        return (num1 * num2);
        break;
    }
    return 0;
}

int main()
{
    int num1, num2;

    num1 = read_nums("enter first number");
    num2 = read_nums("enter second number");
    enum en_operators _operators = operators();

    cout << "the result is = " << calculat(num1, num2, _operators) << endl;
}
