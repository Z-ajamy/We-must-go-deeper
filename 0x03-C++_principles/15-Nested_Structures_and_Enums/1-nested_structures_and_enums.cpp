#include <iostream>
using namespace std;

/**
 * 
 *                       0       1       2     ........
 *                       ^       ^       ^             
 *                       |       |       |     
 * enum ennew_data_type {case1 , case2 , case3 , ........};
 * 
 * struct stTAG
 *  {
 *      type var; 
 * 
 *      enum ennew_data_type Fav_case;
 *  };
 * 
 * int main ()
 *  {
 *      struct stTAG VAR;
 *      
 *      VAR.var = .... ;
 *      Var.Fav_case = ennew_data_type::case1;  ----> Var.Fav_case = 0; 
 *  }
 */

enum egender {male , femail};
enum enstatus {single , mar};
enum enfav_color {red = 100 , blue , green};
enum enhouse_state {owner , tenant};

struct staddress
{
    string street;
    short int house_number;
    enum enhouse_state address_state;
};

struct stwork
{
    string name;
    staddress work_address;
};

struct sthuman
{
    string name;
    short int age;
    string city;
    string country;
    short int month_salary;

    enum egender human_gender;
    enum enstatus human_stase;
    enum enfav_color human_Fav_color;


    struct stwork his_work , wife_work;
    struct staddress his_address;
    struct staddress wife_address;
};

int main()
{
    struct sthuman I;

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
    cout << "Gender: " << (I.human_gender ? "female" : "mail") << endl;
    cout << "Married: " << (I.human_stase ? "Yes" : "No") << endl;
    cout << "Work Name: " << I.his_work.name << endl;
    cout << "Work Address: " << I.his_work.work_address.street << ", " << I.his_work.work_address.house_number << endl;
    cout << "Wife's Work Name: " << I.wife_work.name << endl;
    cout << "Wife's Work Address: " << I.wife_work.work_address.street << ", " << I.wife_work.work_address.house_number << endl;
    cout << "Address: " << I.his_address.street << ", " << I.his_address.house_number << endl;
    cout << "Wife's Address: " << I.wife_address.street << ", " << I.wife_address.house_number << endl;
    return 0;
}
