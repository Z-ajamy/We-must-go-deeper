#include <iostream>
using namespace std;



string read_name ()
{
    string name;
    cout << "enter your name\n";
    getline(cin, name);
    return name;
}
void print_name(string name)
{
    cout << "my name is : " << name << endl;
}

int main ()
{
    print_name(read_name());
}
