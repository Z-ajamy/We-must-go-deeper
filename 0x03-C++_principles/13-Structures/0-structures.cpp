#include <iostream>
using namespace std;

/**
 * 
 * structures is a group of sume different data type
 * 
 * struct TAG
 *  {
 *      type var; 
 *  };
 * int main ()
 *  {
 *      struct TAG VAR;
 *      
 *      VAR.var = .... ;
 *  }
 * 
*/

struct street
{
    string country;
    string city;
    int code_num;
};

struct human
{
    string full_name;
    int age;
    street his_street;
};

int main ()
{
    struct human ahmed;
    ahmed.full_name = "Ahmed Mohammed Mahmoud Al-ajamy";
    ahmed.age = 45;
    ahmed.his_street.country = "Egypt";
    ahmed.his_street.city = "Cairo";
    ahmed.his_street.code_num = 1520;

    cout << ahmed.full_name << endl << ahmed.age << endl << ahmed.his_street.country << endl << ahmed.his_street.city << endl << ahmed.his_street.code_num << endl;
    return 0;
}
