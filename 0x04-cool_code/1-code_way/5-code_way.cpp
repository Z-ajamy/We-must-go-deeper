#include <iostream>
using namespace std;

struct str_name
{
    string f_name;
    string l_name;
};

struct str_name read()
{
    struct str_name name;

    cout << "enter your first name\n";
    cin >> name.f_name;
    cout << "enter your last name\n";
    cin >> name.l_name;
    return name;
}

string full_name(struct str_name name)
{
    string full_name;
    full_name = name.f_name + " " + name.l_name;
    return full_name;
}

void print_name (string full_name)
{
    cout << full_name << endl;
}

int main ()
{
    print_name(full_name(read()));
    return 0;
}
