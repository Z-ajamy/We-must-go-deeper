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
    float num , P2 , P3 , P4;

    cout << "enter the numbrt\n";
    cin >> num;

    P2 = pow(num , 2);
    P3 = pow(num , 3);
    P4 = pow(num , 4);

    cout << "__________________\n" << P2 << endl << P3 << endl << P4 << endl;
    return 0;
}
