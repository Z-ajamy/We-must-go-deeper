#include <iostream>
using namespace std;

void read_num(int &length, int &width)
{
    cout << "enter rectangle length" << endl;
    cin >> length;
    cout << "enter rectangle width" << endl;
    cin >> width;
}

int rectangle_area(int length, int width)
{
    return (length * width);
}

void print(int area, int length, int width)
{
    cout << "______________\nthe rectangle area = "
         << length << " X "
         << width << " = "
         << area << endl;
}
int main()
{
    int length, width;
    read_num(length, width);
    print(rectangle_area(length, width), length, width);
    return 0;
}
