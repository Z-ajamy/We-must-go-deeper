#include <iostream>
using namespace std;

enum en_pass_or_faild {faild , pass};
int read_degree ()
{
    cout << "enter me a degree\n";
    float degree;
    cin >> degree;
    return degree;
}
en_pass_or_faild is_pass (int degree)
{
    if (degree >= 50)
    {
        return en_pass_or_faild::pass;
    }
    else
        return en_pass_or_faild::faild;
}
void print_state (en_pass_or_faild is_pass)
{
    if (is_pass == faild)
    {
        cout << "faild\n";
    }
    else
        cout << "pass\n";
}

int main ()
{
    print_state(is_pass(read_degree()));
    return 0;
}
