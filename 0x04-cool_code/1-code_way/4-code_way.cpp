#include <iostream>
using namespace std;

struct strinfo
{
    short int age;
    bool drive_licance;
    bool recommendation;
};

struct strinfo read_info ()
{
    struct strinfo info;

    cout << "enter your age\n";
    cin >> info.age;
    cout << "do you have drive licance ? (n = 0)\n";
    cin >> info.drive_licance;
    cout << "do you have drive recommendation ? (n = 0)\n";
    cin >> info.recommendation;
    return info;
}
bool is_accepted (struct strinfo info)
{
    return ((info.age >= 18 && info.drive_licance == 1) || info.recommendation == 1);
}
void print_result (struct strinfo info)
{
    if (is_accepted(info))
    {
        cout << "accepted\n";
    }
    else
    cout << "Un-accepted\n";
}

int main ()
{
    print_result(read_info());
}
