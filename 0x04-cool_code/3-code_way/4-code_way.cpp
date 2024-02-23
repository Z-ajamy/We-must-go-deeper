#include <iostream>
using namespace std;

bool validate_num(int num, int from, int to)
{
    return(num >= from && num <= to);
}

int read_validate_age()
{
    int age;
    cout << "enter your age" << endl;
    do
    {
        cin >> age;
        if (!validate_num(age, 18, 50))
        {
            cout << "age is invalid....\ntry again" << endl;
        }
        
    } while (!validate_num(age, 18, 50));
    return age;    
}

void print_result ()
{
    read_validate_age();
    cout << "valid age!" << endl;
}

int main()
{
    print_result();
}
