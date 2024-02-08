#include <iostream>
using namespace std;

/**
 * 
 * long double , double , long int , int >--(float())--> float
 * long double , double , float >--(int())--> int
 * long double , float , long int , int >--(double())--> double
 * 
 * string --(stoi())--> int
 * string --(stof())--> float
 * string --(stod())--> double
 * 
 * #include <string>
 * double , float , int --(to_string)--> string
 * 
*/

int main()
{
    int i1 = 1 , i2 = 2 ,i3 = 3 , i4 = 4;
    long int li ;
    float f ;
    double d  ;
    long double ld ;

    li = i1;
    f = float(i2);
    d = double(i3);
    ld = double(i4);

    cout << li << endl << f << endl << d << endl << ld << endl << "__________________\n";
    cout << sizeof(li) << endl << sizeof(f) << endl << sizeof(d) << endl << sizeof(ld) << endl ;
    return 0;
}
