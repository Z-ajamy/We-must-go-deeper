#include <iostream>
using namespace std;
/**
 *
 *          for (initialization ; condition ; update)  ----true
 *          ^                                                  |
 *          |--- {body}     <----------------------------------
 *
 */
int pow(int a, int b)
{
    if (b >= 0)
    {
        int n = 1;
        for (int i = 1; i <= b; i++)
        {
            n *= a;
        }
        return n;
    }
    else
        return 0;
}

int main()
{
    int i, j;
    cin >> i >> j;

    cout << "___________\n"
         << pow(i, j) << endl;
}
