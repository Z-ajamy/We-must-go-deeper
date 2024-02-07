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


struct address
{
    string street;
    short int house_number;
};

struct work
{
    string name;
    address work_address;
};

struct human
{
    string name;
    short int age;
    string city;
    string country;
    short int month_salary;
    char gender;
    bool married;
    work his_work , wife_work;
    address his_address;
    address wife_address;
};

int main()
{
    struct human I;

    cout << "whats your name ?\n";
    cin >> I.name;
    cout << "whats your age ?\n";
    cin >> I.age;
    cout << "whats your city ?\n";
    cin >> I.city;
    cout << "whats your country ?\n";
    cin >> I.country;
    cout << "whats your monthly salary ?\n";
    cin >> I.month_salary;
    cout << "whats your gender ?\n(m/f)\n";
    cin >> I.gender;
    cout << "are you married ?\n(0/1)\n";
    cin >> I.married;
    cout << "whats your work name ?\n";
    cin >> I.his_work.name;
    cout << "whats your work address street?\n";
    cin >> I.his_work.work_address.street;
    cout << "whats your work address house number?\n";
    cin >> I.his_work.work_address.house_number;
    cout << "whats your wife work name ?\n";
    cin >> I.wife_work.name;
    cout << "whats your wife work address street?\n";
    cin >> I.wife_work.work_address.street;
    cout << "whats your wife work address house number?\n";
    cin >> I.wife_work.work_address.house_number;
    cout << "whats your address street?\n";
    cin >> I.his_address.street;
    cout << "whats your address house number?\n";
    cin >> I.his_address.house_number;
    cout << "whats your wife address street?\n";
    cin >> I.wife_address.street;
    cout << "whats your wife address house number?\n";
    cin >> I.wife_address.house_number;

    cout << "__________________________________________\n";
    cout << "\nYour Information:\n";
    cout << "Name: " << I.name << endl;
    cout << "Age: " << I.age << endl;
    cout << "City: " << I.city << endl;
    cout << "Country: " << I.country << endl;
    cout << "Monthly Salary: " << I.month_salary << endl;
    cout << "yearly Salary: " << I.month_salary * 12 << endl;
    cout << "Gender: " << I.gender << endl;
    cout << "Married: " << (I.married ? "Yes" : "No") << endl;
    cout << "Work Name: " << I.his_work.name << endl;
    cout << "Work Address: " << I.his_work.work_address.street << ", " << I.his_work.work_address.house_number << endl;
    cout << "Wife's Work Name: " << I.wife_work.name << endl;
    cout << "Wife's Work Address: " << I.wife_work.work_address.street << ", " << I.wife_work.work_address.house_number << endl;
    cout << "Address: " << I.his_address.street << ", " << I.his_address.house_number << endl;
    cout << "Wife's Address: " << I.wife_address.street << ", " << I.wife_address.house_number << endl;

    return 0;
}
