#include <iostream>
using namespace std;

enum en_pass_or_failed
{
    pass,
    fail
};
void read_num(short int &degree1, short int &degree2, short int &degree3)
{
    cout << "enter your first degree\n";
    cin >> degree1;
    cout << "enter your second degree\n";
    cin >> degree2;
    cout << "enter your third degree\n";
    cin >> degree3;
}

short int sum(short int num1, short int num2, short int num3)
{
    return (num1 + num2 + num3);
}

float avrege(float sum)
{
    return (sum /= 3);
}

en_pass_or_failed pass_or_failed(float av_degree)
{
    if (av_degree >= 50)
    {
        return en_pass_or_failed::pass;
    }
    else
        return en_pass_or_failed::fail;
}

void print(short int degree1, short int degree2, short int degree3)
{
    cout << "the avrege of " << degree1 << ", " << degree2 << ", " << degree3 << " = " << avrege(sum(degree1, degree2, degree3)) << endl;
    if (pass_or_failed(avrege(sum(degree1, degree2, degree3))) == en_pass_or_failed::fail)
    {
        cout << "failed\n";
    }
    else
        cout << "pass\n";
}

int main()
{
    short int num1, num2, num3;
    read_num(num1, num2, num3);
    print(num1, num2, num3);
    return 0;
}
