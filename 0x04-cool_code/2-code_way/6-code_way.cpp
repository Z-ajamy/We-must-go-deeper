#include <iostream>
#include <cmath>
using namespace std;

void read_num(int &Base, int &height)
{
    cout << "enter triangle Base" << endl;
    cin >> Base;
    cout << "enter triangle height" << endl;
    cin >> height;
}

float triangle_area(int Base, int height)
{
    return ((1.0 / 2) * Base * height);
}

void print(float area)
{
    cout << "______________\nthe triangle area = "
         << area << endl;
}
int main()
{
    int Base, height;
    read_num(Base, height);
    print(triangle_area(Base, height));
    return 0;
}
