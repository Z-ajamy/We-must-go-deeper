#include <iostream>
#include <string>
using namespace std;

/**
 *
 *          for (int i = 0; i < Length; i++)
 *              {
 *                  array[i] ;   -----> الحلقه هتعمل مرور على كل عنصر من عناصر المصفوفه
 *              }
 *
 */

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo &Info)
{
    cout << "__________________________________\n";

    cout << "Please enter First Name?\n";
    cin >> Info.FirstName;

    cout << "Please enter Last Name?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << endl;
}

void PrintInfo(strInfo Info)
{
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n**********************************\n";
}

void ReadPersonsInfo(strInfo Persons[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "enter the " << i + 1 << " pereson info\n";
        ReadInfo(Persons[i]);
    }
}

void PrintPersonsInfo(strInfo Persons[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "\n**********************************\n";
        cout << "the " << i + 1 << " info is\n";
        PrintInfo(Persons[i]);
    }
}

int main()
{

    strInfo Persons[100];
    int length;

    cout << "enter number of peresons.....\n";
    cin >> length;
    cout << "#############################\n";

    ReadPersonsInfo(Persons, length);
    PrintPersonsInfo(Persons, length);

    return 0;
}
