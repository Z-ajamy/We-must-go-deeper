#include <iostream>
using namespace std;
/**
 * 
 *                       0       1       2     ........
 *                       ^       ^       ^             
 *                       |       |       |     
 * enum new_data_type {case1 , case2 , case3 , ........};
 * 
 * int main ()
 *  {
 *      enum new_data_type var ;
 *      
 *      var = new_data_type::case1 ;   ----> var = 0
 *  } 
 * 
 */

struct address
{
    string city;
    short int house_num;
};

struct jop
{
    string jop_name;
    short int Monthly_salary;
    address jop_address;
};

struct human
{
    string name;
    short int age;
    struct address human_address;
    struct jop human_jop;
};

enum states {marreid , single}; 
enum color {red = 100 , blue , green};
enum gender {male , female};

int main() 
{ 
	struct human ahmed;

    enum color Fav_c;
    enum states his_states;
    enum gender his_gender;

    ahmed.name = "Ahmed Mohamme Mahmood ";
    ahmed.age = 45;
    ahmed.human_address.city = "cairo";
    ahmed.human_address.house_num = 536;
    ahmed.human_jop.jop_name = "doctor";
    ahmed.human_jop.Monthly_salary = 7000;
    ahmed.human_jop.jop_address.city = "cairo";
    ahmed.human_jop.jop_address.house_num = 179;

    Fav_c = color::blue;
    his_states = states::marreid;
    his_gender = gender::male;


cout << "Name: " << ahmed.name << endl;
    cout << "Age: " << ahmed.age << endl;
    cout << "City: " << ahmed.human_address.city << endl;
    cout << "House Number: " << ahmed.human_address.house_num << endl;
    cout << "Job Name: " << ahmed.human_jop.jop_name << endl;
    cout << "Monthly Salary: " << ahmed.human_jop.Monthly_salary << endl;
    cout << "Job City: " << ahmed.human_jop.jop_address.city << endl;
    cout << "Job House Number: " << ahmed.human_jop.jop_address.house_num << endl;
    cout << "Favorite Color: " << Fav_c << endl;
    cout << "Marital Status: " << his_states << endl;
    cout << "Gender: " << his_gender << endl;

    return 0;
} 
