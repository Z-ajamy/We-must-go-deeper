#include <iostream>
using namespace std;

int read_num()
{
    int num;
        cout << "enter the number\n";
        cin >> num;
    return num;
}

void pow_2_3_4(int num)
{
    cout << "the power 2 of " << num << " is " << num * num << endl
    << "the power 3 of " << num << " is " << num * num * num << endl
    << "the power 4 of " << num << " is " << num * num * num * num << endl;
}

int main()
{
    pow_2_3_4(read_num());
    return 0;
}
