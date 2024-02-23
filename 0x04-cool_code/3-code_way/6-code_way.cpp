#include <iostream>
using namespace std;

int read_num()
{
    int num;
    cout << "enter your number" << endl;
    cin >> num;
    return num;
}

void loop_nums(int num)
{
    int i = 0;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    loop_nums(read_num());
}
