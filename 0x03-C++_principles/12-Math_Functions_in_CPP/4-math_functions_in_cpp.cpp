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
    float Circumference , PI , Area;
    PI = 3.14;

    cout << "to get Circle Area Along the Circumference\ngive me the Along the Circumference\n";
    cin >> Circumference;

    Area = pow(Circumference / 2 , 2) / PI;
    cout << "Circle Area is = " << Area << endl;
    return 0;
}
