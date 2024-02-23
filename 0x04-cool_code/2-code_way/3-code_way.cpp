#include <iostream>
using namespace std;

void read_num(int &num1, int &num2)
{
    cout << "enter frist number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
}

void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void print(int num1, int num2)
{
    cout << "______________\n"
         << num1 << "\n"
         << num2 << endl;
}
int main()
{
    int num1, num2, num3;
    read_num(num1, num2);
    swap(num1, num2);
    print(num1, num2);
    return 0;
}
