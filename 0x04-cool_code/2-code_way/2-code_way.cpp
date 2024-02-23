#include <iostream>
using namespace std;

enum en_big_or_small
{
    big_num1,
    big_num2,
    big_num3,
    equal
};

void read_num(int &num1, int &num2, int &num3)
{
    cout << "enter frist number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "enter third number" << endl;
    cin >> num3;
}

en_big_or_small big_or_small(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return en_big_or_small::big_num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return en_big_or_small::big_num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        return en_big_or_small::big_num3;
    }
    else
        return en_big_or_small::equal;
}

void which_bigger(int num1, int num2, int num3)
{
    if (big_or_small(num1, num2, num3) == en_big_or_small::big_num1)
    {
        cout << "the frist number is the bigest " << num1 << " > " << num2 << " & " << num1 << " > " << num3 << endl;
    }
    else if (big_or_small(num1, num2, num3) == en_big_or_small::big_num2)
    {
        cout << "the second number is the bigest " << num2 << " > " << num1 << " & " << num2 << " > " << num3 << endl;
    }
    else if (big_or_small(num1, num2, num3) == en_big_or_small::big_num3)
    {
        cout << "the third number is the bigest " << num3 << " > " << num1 << " & " << num3 << " > " << num2 << endl;
    }

    else
        cout << "they are equal" << endl;
}

int main()
{
    int num1, num2, num3;
    read_num(num1, num2, num3);
    which_bigger(num1, num2, num3);
    return 0;

}
