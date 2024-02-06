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
    float Diameter , Area;
    const float PI = 3.14;

    cout << "to get Circle Area Through radius\ngive me the radius\n";
    cin >> Diameter;

    Area = PI * pow(Diameter , 2) * (0.25);
    cout << "Circle Area is = " << Area << endl;
return 0;
}
