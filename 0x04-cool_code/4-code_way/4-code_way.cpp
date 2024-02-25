#include <iostream>
using namespace std;

struct en_piggy_bank
{
    int pennies, nickels, dimes, quarters, dollers;
};

en_piggy_bank read()
{
    en_piggy_bank piggy_bank;
    cout << "your dollers is ";
    cin >> piggy_bank.dollers;
    cout << "your quarters is ";
    cin >> piggy_bank.quarters;
    cout << "your dimes is ";
    cin >> piggy_bank.dimes;
    cout << "your nickels is ";
    cin >> piggy_bank.nickels;
    cout << "your pennies is ";
    cin >> piggy_bank.pennies;
    cout << endl;

    return piggy_bank;
}

int cal_pennies(en_piggy_bank piggy_bank)
{
    return (piggy_bank.pennies + 5 * piggy_bank.nickels + 10 * piggy_bank.dimes + 25 * piggy_bank.quarters + 100 * piggy_bank.dollers);
}

float cal_dollar(float cal_pennies)
{
    return(cal_pennies /= 100.0);
}

void print_res()
{
    int pennies = cal_pennies(read());
    cout << "total pennies = " << pennies << endl;
    cout << "total dollars = " << cal_dollar((float)pennies) << endl;
}

int main()
{
    print_res();
}
