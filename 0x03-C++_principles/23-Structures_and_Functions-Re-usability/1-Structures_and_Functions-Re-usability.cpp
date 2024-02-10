#include <iostream>
#include <string>
using namespace std;

/**
 * struct TAG
 *  {
 *      type1 var1
 *      type2 var2
 *  };
 * 
 * type fun1 (struct TAG &VAR) -----> & give me ability to chang its value
 *  {
 *      VAR.var1 = 5;
 *  }
 * 
 * type fun1 (struct TAG VAR) ----> just can read its value
 *  {
 *      cout << VAR.var1 << endl ;
 *  }
 * 
 * int main ()
 *  {
 *      struct TAG VAR_name;
 *      fun1(VAR_name);
 *      fun2(VAR_name);
 * 
 *      return 0;
 *  }
 * 
*/
enum enstat {married , single};

struct address
{
    string city;
    string street_name;
    int house_num;
};

struct strinfo
{
    string name;
    struct address his_address;
    long int phone_number;
    enum enstat his_state;
};

void infun (struct strinfo &person)
{
    cout << "inter your name\n";
    cin.ignore();
    getline (cin , person.name);
    cout << "inter your city\n";
    getline (cin , person.his_address.city);
    cout << "inter your street name\n";
    getline (cin , person.his_address.street_name);
    cout << "inter your house number\n";
    cin >> person.his_address.house_num;
    cout << "inter your phone number\n";
    cin >> person.phone_number;
    cout << "are you single ? (0 -> no , 1 -> yes) \n";
    int state ;
    cin >> state ;
    person.his_state = (state) ? single : married ;
}

void outfun (struct strinfo person)
{
    cout << "\n********************************\n";
    cout << "name is : " << person.name << endl ;
    cout << "city is : " << person.his_address.city << endl ;
    cout << "street name is : " << person.his_address.street_name << endl ;
    cout << "house number is : " << person.his_address.house_num << endl ;
    cout << "phone number is : " << person.phone_number << endl ;
    cout << "state is : " << ((person.his_state) ? "single" : "married") << endl ;
    cout << "********************************\n";
}

int main ()
{
    struct strinfo person1;
    infun (person1);
    outfun (person1);

    struct strinfo person2;
    infun (person2);
    outfun (person2);

    return 0;
}
