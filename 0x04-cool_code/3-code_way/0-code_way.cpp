 #include <iostream>
#include <cmath>
using namespace std;

int read_circumference()
{
    int circumference;
    cout << "to git circle area by circumference ......\nenter Side of the circumference" << endl;
    cin >> circumference;
    return circumference;
}

float circle_area(int circumference)
{
    const float PI = 3.14;
    return (pow(circumference, 2) / (4 * PI));
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    print(circle_area(read_circumference()));
    return 0;
}
