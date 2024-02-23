#include <iostream>
#include <cmath>
using namespace std;

void read_num(int &Length_of_the_side, int &base)
{
    cout << "to get circle area Inside an isosceles triangle...\nenter the Length of the side" << endl;
    cin >> Length_of_the_side;
    cout << "enter triangle base" << endl;
    cin >> base;
}

float circle_area(int Length_of_the_side, int base)
{
    const float PI = 3.14;
    return (PI * pow(base, 2) * (1.0/4) * (2 * Length_of_the_side - base) / (2 * Length_of_the_side + base));
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    int Length_of_the_side, base;
    read_num(Length_of_the_side, base);
    print(circle_area(Length_of_the_side, base));
    return 0;
}
