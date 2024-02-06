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
    float a , b , c , p , PI , Area;
    PI = 3.14;

    cout << "to get  Circle Area circle Described Around an Arbitrary Triangle\ngive me the leangths of the Triangle\n";
    cin >> a >> b >> c;
    p = (a + b +c) / 2;


    Area = pow((a * b * c) / ( 4 * sqrt(p * (p - a) * (p - b) * (p - c)) ) , 2) * PI ;
    cout << "Circle Area is = " << Area << endl;
    return 0;
}
