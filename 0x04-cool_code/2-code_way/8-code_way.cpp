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
    return (pow(Diameter, 2) * (1.0/4) * 3.14);
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
