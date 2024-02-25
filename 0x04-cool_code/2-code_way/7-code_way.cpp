#include <iostream>
#include <cmath>
using namespace std;

int read_Radius()
{
    int Radius;
    cout << "enter circle Radius" << endl;
    cin >> Radius;
    return Radius;
}

float circle_area(int Radius)
{
    const float PI = 3.14;
    return (pow(Radius, 2) * PI);
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    print(circle_area(read_Radius()));
    return 0;
}
