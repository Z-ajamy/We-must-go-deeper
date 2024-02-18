#include <iostream>
using namespace std;

int read_num ()
{
    cout << "give me a number\n";
    float num;
    cin >> num;
    return num;
}
float half_num (float num)
{
    num /= 2;
    return num;
}
void print_num(float num)
{
    cout << "half of the number is " << num << endl;
}
int main ()
{
    print_num(half_num(read_num()));
    return 0;
}
