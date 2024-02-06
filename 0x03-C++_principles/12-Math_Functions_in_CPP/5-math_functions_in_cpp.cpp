#include <iostream>
#include <cmath>

using namespace std;
/**
 * 
 * #include <cmath>
 *  
 * float A.2 , B 
 * sqrt(A.2) ---> (A.2)^(1/2)
 * round(A.2) ---> A
 * pow(A , B) ---> (A)^(B)
 * ceil(A,1) ---> A + 1
 * floor(A,9) ---> A
 * abs(-A) ---> A
 * 
*/
int main ()
{
    float bise , PI , Area , high;
    PI = 3.14;

    cout << "to get  Circle Area Inscribed in an Isosceles Triangle\ngive me the Along the bise of Triangle\n";
    cin >> bise;
    cout << "give me the Along the high of Triangle\n";
    cin >> high;


    Area = pow(bise / 2 , 2) * PI * ((2 * high - bise) / (2 * high + bise));
    cout << "Circle Area is = " << Area << endl;
    return 0;
}
