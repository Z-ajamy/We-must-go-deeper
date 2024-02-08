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
    int i;
    long int li;
    float f;
    double d;
    long double ld;
    string st;

    st = "41.22";
    i = stoi(st);
    li = stoi(st);
    f = stof(st);
    d = stod(st);
    ld = stod(st);

    cout << i << endl << li << endl << f << endl << d << endl << ld << endl;
    return 0;
}
