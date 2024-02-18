#include <iostream>
using namespace std;


void read_num(int &num1 , int &num2 , int &num3)
{
    cout << "enter your first number\n";
    cin >> num1;
    cout << "enter your second number\n";
    cin >> num2;
    cout << "enter your third number\n";
    cin >> num3;
}

int sum (int num1 , int num2 , int num3)
{
    return (num1 + num2 + num3) ;
}

int avrege(int sum)
{
    return sum /= 3;
}

void print (int num1 ,int num2 ,int num3)
{
    cout << "the avrege of " << num1 << ", " << num2 <<
    ", " << num3 << " = " << avrege(sum(num1 , num2 , num3)) << endl;
}

int main ()
{
    int num1 , num2 , num3;
    read_num(num1 , num2 , num3);
    print(num1 , num2 , num3);
    return 0;
}
