#include <iostream>
#include <cmath>
using namespace std;

int read_Side_of_the_square()
{
    int Side_of_the_square;
    cout << "to git circle area in a square......\nenter Side of the square" << endl;
    cin >> Side_of_the_square;
    return Side_of_the_square;
}

float circle_area(int Side_of_the_square)
{
    const float PI = 3.14;
    return (pow(Side_of_the_square, 2) * (1.0/4) * PI);
}

void print(float area)
{
    cout << "______________\nthe circle area = "
         << area << endl;
}
int main()
{
    print(circle_area(read_Side_of_the_square()));
    return 0;
}
