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

struct Detales
{
    short int cost;
    short int year;
};
struct Owner
{
    string name;
    short int age;
};
struct tool
{
    string name;
    string use;
    Owner owner;
    Detales A;
};

int main ()
{
    struct tool computer;

    computer.name = "computer";
    computer.use = "work";
    computer.owner.name = "abdo";
    computer.owner.age = 21;
    computer.A.cost = 6000;
    computer.A.year = 2021;

cout << computer.name << endl << computer.use << endl << computer.owner.name << endl << computer.owner.age << endl << computer.A.cost << endl << computer.A.year  << endl;
return 0;
}
