#include <iostream>
#include <cmath>
using namespace std;

void read_num(int &side_length, int &diameter)
{
    cout << "enter rectangle side length" << endl;
    cin >> side_length;
    cout << "enter rectangle diagonal" << endl;
    cin >> diameter;
}

float rectangle_area(int side_length, int diameter)
{
    return (side_length * sqrt(pow(diameter, 2) - pow(side_length, 2)));
}

void print(float area)
{
    cout << "______________\nthe rectangle area = "
         << area << endl;
}
int main()
{
    int side_length, diameter;
    read_num(side_length, diameter);
    print(rectangle_area(side_length, diameter));
    return 0;
}
