#include <iostream>
using namespace std;

int read_num()
{
    short int num1 = 1;
    do
    {
        cout << "enter the number\n";
        cin >> num1;
    } while (num1 <= 0 || num1 >= 100);
    return num1;
}

char get_degree(int num)
{
    if (num >= 90 && num <= 100)
    {
        return 'A';
    }
    else if (num >= 80 && num < 90)
    {
        return 'B';
    }
    else if (num >= 70 && num < 80)
    {
        return 'C';
    }
    else if (num >= 60 && num < 70)
    {
        return 'D';
    }
    else if (num >= 50 && num < 60)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

void print_degree(char degree)
{
    cout << "your degree is " << degree << endl;
}

int main()
{
    print_degree(get_degree(read_num()));
}
