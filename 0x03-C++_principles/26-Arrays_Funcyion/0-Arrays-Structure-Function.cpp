#include <iostream>
using namespace std;
/**
 * 
 * struct TAG
 *  {
 *      type var;
 *  };
 * 
 * int main ()
 *  {
 *      struct TAG VAR[num of elements] ;
 *      VAR[0].var = value ;
 *  }
 *
*/

enum enstate {single , married};

struct straddress
{
    string country;
    string city;
    string street_name;
    short int house_num;
};

struct strinfo
{
    string name;
    short int age;
    long int phone_num;
    struct straddress address;
    enum enstate state;
};

void in_fun (struct strinfo &pereson)
{
    cout << "enter your name\n" ;
    cin.ignore() ;
    getline(cin , pereson.name) ;
    cout << "enter your age\n" ;
    cin >> pereson.age ;
    cout << "inter your country\n" ;
    cin.ignore() ;
    getline (cin , pereson.address.country) ;
    cout << "inter your city\n" ;
    getline (cin , pereson.address.city) ;
    cout << "inter your street name\n" ;
    getline (cin , pereson.address.street_name) ;
    cout << "inter your house number\n" ;
    cin >> pereson.address.house_num ;
    cout << "inter your phone number\n" ;
    cin >> pereson.phone_num ;
    cout << "are you single ? (0 -> no , 1 -> yes)\n";
    int state ;
    cin >> state ;
    pereson.state = (state) ? single : married ;
}

void out_fun(struct strinfo pereson)
{
    cout << "**************************\n" ;
    cout << "name is : " << pereson.name << endl ;
    cout << "country is : " << pereson.address.country << endl ;
    cout << "city is : " << pereson.address.city << endl ;
    cout << "street name is : " << pereson.address.street_name << endl ;
    cout << "house number is : " << pereson.address.house_num << endl ;
    cout << "phone number is : " << pereson.phone_num << endl ;
    cout << "state is : " << ((pereson.state) ? "single" : "married") << endl ;
    cout << "********************************\n";
}

int main ()
{
    struct strinfo pereson[3] ;
    in_fun(pereson[0]);
    out_fun(pereson[0]);

    in_fun(pereson[1]);
    out_fun(pereson[1]);

    in_fun(pereson[2]);
    out_fun(pereson[2]);
    return 0;
}
