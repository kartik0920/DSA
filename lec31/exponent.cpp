#include <iostream>
using namespace std;
int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main()
{
    int base, exp;
    cout << "Enter base:";
    cin >> base;
    cout << "Enter exp:";
    cin >> exp;
    cout << base << "^" << exp << "=" << power(base, exp);
    return 0;
}