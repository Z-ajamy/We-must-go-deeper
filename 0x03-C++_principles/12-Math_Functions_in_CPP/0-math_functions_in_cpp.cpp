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
    float Diagonal , Side , Area;

    cout << "to get Rectangle area Through Diagonal and Side Area\ngive me the Diagonal\n";
    cin >> Diagonal;
    cout << "give me the Side Area\n";
    cin >> Side;

    Area = Side * sqrt( pow( Diagonal , 2 ) - pow( Side , 2) );
    cout << "Rectangle area Through Diagonal and Side Area is = " << Area << endl;
return 0;
}
