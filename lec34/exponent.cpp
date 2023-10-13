#include <iostream>
using namespace std;
int expo(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp == 1)
    {
        return base;
    }
    int ans =  expo(base, exp / 2);
    if(exp&1){
        return ans * base * base;
    }
    else{
        return base * base;
    }
}
int main()
{
    int a, b;
    cout << "enter base:";
    cin >> a;
    cout << "Enter exponent:";
    cin >> b;
    cout << "The exp of " << a << " and " << b << " is " << expo(a, b) << endl;
    return 0;
}