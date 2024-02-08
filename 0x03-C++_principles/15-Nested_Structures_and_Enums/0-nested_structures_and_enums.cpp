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

enum enstates {marreid , single}; 
enum encolor {red = 100 , blue , green};
enum engender {male , female};

struct staddress
{
    string city;
    short int house_num;
};

struct stjop
{
    string jop_name;
    short int Monthly_salary;
    struct staddress jop_address;
};

struct sthuman
{
    string name;
    short int age;
    struct staddress human_address;
    struct stjop human_jop;
    enum encolor Fav_color;
    enum enstates state;
    enum engender gender;
};



int main() 
{ 
	struct sthuman ahmed;

    ahmed.name = "Ahmed Mohamme Mahmood ";
    ahmed.age = 45;

    ahmed.human_address.city = "cairo";
    ahmed.human_address.house_num = 536;
    ahmed.human_jop.jop_name = "doctor";
    ahmed.human_jop.Monthly_salary = 7000;

    ahmed.human_jop.jop_address.city = "cairo";
    ahmed.human_jop.jop_address.house_num = 179;
    
    ahmed.state = enstates::marreid;
    ahmed.gender = engender::male;
    ahmed.Fav_color = encolor::red;

cout << "Name: " << ahmed.name << endl;
    cout << "Age: " << ahmed.age << endl;
    cout << "City: " << ahmed.human_address.city << endl;
    cout << "House Number: " << ahmed.human_address.house_num << endl;
    cout << "Job Name: " << ahmed.human_jop.jop_name << endl;
    cout << "Monthly Salary: " << ahmed.human_jop.Monthly_salary << endl;
    cout << "Job City: " << ahmed.human_jop.jop_address.city << endl;
    cout << "Job House Number: " << ahmed.human_jop.jop_address.house_num << endl;
    cout << "Favorite Color: " << ahmed.Fav_color << endl;
    cout << "Marital Status: " << ahmed.state << endl;
    cout << "Gender: " << ahmed.gender << endl;

    return 0;
} 
