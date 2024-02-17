#include <iostream>
using namespace std;

enum en_num_type {even , odd};
int read_num ()
{
    int num;
    cout << "enter a integar number\n";
    cin >> num;
    return num ;
}
enum en_num_type even_or_odd(int num)
{
    num %= 2;
    if (num == 0)
    {
        return (en_num_type)num;
    }
    else
    {
        return (en_num_type)num;
    }
}
void print_num (enum en_num_type even_or_odd)
{
    if (even_or_odd == en_num_type::even)
    {
        cout << "even" << endl;
    }
    else if (even_or_odd == en_num_type::odd)
    {
        cout << "odd" << endl;
    }
    
}
int main ()
{
    print_num(even_or_odd(read_num()));
}
