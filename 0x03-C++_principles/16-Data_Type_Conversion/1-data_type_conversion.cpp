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
    string st1 , st2 , st3;

    float f = 21.546;
    double d = 22.45861;
    int i = 20;
    st1 = to_string(i);
    st2 = to_string(d);
    st3 = to_string(f);


    cout << st1 << endl << st2 << endl << st3 << endl;
    return 0;
}
