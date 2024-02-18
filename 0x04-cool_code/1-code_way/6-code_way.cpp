#include <iostream>
using namespace std;

int read_num ()
{
    cout << "give me a number\n";
    int num;
    cin >> num;
    return num;
}
float half_num (float num)
{
    float h_num;
    h_num = num / 2;
    return h_num;
}
void print_num(int num)
{
    string R = "the half of " + to_string(num) + " is " + to_string (half_num(num));
    cout << R << endl;
}
int main ()
{
    print_num(read_num());
    return 0;
}
