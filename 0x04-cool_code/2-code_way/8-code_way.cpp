#include <iostream>
#include <cmath>
using namespace std;

int read_Diameter()
{
    int Diameter;
    cout << "enter circle Diameter" << endl;
    cin >> Diameter;
    return Diameter;
}

float circle_area(int Diameter)
{
    const float PI = 3.14;
    return (pow(Diameter, 2) * (1.0/4) * PI);
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    print(circle_area(read_Diameter()));
    return 0;
}
