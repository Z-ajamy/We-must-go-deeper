#include <iostream>
using namespace std;

/**
 * 
 *                    012345678...........
 *                    ^^^^^^^^^^^^^^^^^^^^
 *                    ||||||||||||||||||||
 * string str_name = "abcdefghijklmnopqrst";
 * str_name.length() -----> length of the string
 * str_name[num] -----> reach element in the str_mame
 * 
 * string str2 = "cd";
 * string str1 = "ab";
 * string str3 = str1 + str2; -----> str3 = "abcd";
 * 
 * getline(cin , str_name); ----> cin >> str_name;
 * 
*/
int main()
{
    string name , num1 , num2 , num3;
    cout << "inter your name\n";
    getline(cin , name);
    cout << "inter string number\n";
    getline(cin , num1);
    cout << "inter string number\n";
    getline(cin , num2);
    num3 = num1 + num2;

    int i = stoi(num1) , j = stoi(num2) , n ;
    n = i * j;

    cout<< "____________\n" << name << endl;
    cout << num3 << endl << n << endl;

return 0;
}
