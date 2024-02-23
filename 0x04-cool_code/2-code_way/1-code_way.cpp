#include <iostream>
using namespace std;

enum en_big_or_small {big_num , small_num , equal};

void read_num(int &num1 , int &num2)
{
    cout << "enter frist number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
}

en_big_or_small big_or_small(int num1 , int num2)
{
    if (num1 > num2)
    {
        return en_big_or_small::big_num;
    }
    else if (num1 < num2)
    {
        return en_big_or_small::small_num;
    }
    else
        return en_big_or_small::equal;
}

void which_bigger(int num1 , int num2)
{
    if (big_or_small(num1 ,num2) == en_big_or_small::big_num)
    {
        cout << "the frist number is bigger then second number " << num1 << " > " << num2 << endl;
    }
    else if (big_or_small(num1 ,num2) == en_big_or_small::small_num)
    {
        cout << "the second number is bigger then frist number " << num2 << " > " << num1 << endl;
    }
    else
        cout << "they are equal" << endl;
}


int main()
{
    int num1 , num2;
    read_num(num1 , num2);
    which_bigger(num1 , num2);
}
