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
    float num , p , r;

    cout << "enter the numbrt\n";
    cin >> num;
    cout << "enter the power\n";
    cin >> p;


    r = pow(num , p);

    cout << "__________________\n" << floor(r) << endl << ceil(r) << endl << abs(r) << endl;
    return 0;
}
