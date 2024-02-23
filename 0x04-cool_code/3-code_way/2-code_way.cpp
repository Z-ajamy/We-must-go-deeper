#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

void read_num(int &a, int &b, int &c)
{
    cout << "to get  Circle Area circle Described Around an Arbitrary Triangle\ngive me the leangths of the Triangle\n";
    cin >> a >> b >> c;
}

float circle_area(int a,int b ,int c)
{
    float p = (a + b +c) / 2;

    return (pow((a * b * c) / ( 4 * sqrt(p * (p - a) * (p - b) * (p - c)) ) , 2) * PI );
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    int a, b, c;
    read_num(a, b, c);
    print(circle_area(a, b, c));
    return 0;
}
