#include <iostream>
using namespace std;

int read_num()
{
    int num;
    cout << "enter your positive number" << endl;
    cin >> num;
    return num;
}

void loop_nums(int num)
{
    int i = num;
    while (i >= 0)
    {
        cout << i << endl;
        i--;
    }
}

int main()
{
    loop_nums(read_num());
}
