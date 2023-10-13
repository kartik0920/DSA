#include <iostream>
using namespace std;
/*
void gcd(int a, int b)
{
    int i;
    if (a < b)
    {
        i = a;
    }
    else
    {
        i = b;
    }
    bool flag = 1;
    while (i > 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "GCD is " << i << endl;
            flag = 0;
            break;
        }

        i -= 1;
    }
    if (flag)
    {
        cout << "GCD is 1";
    }
}
*/

// euclidian GCD algorithm
// bhaiyas method
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a < b)
        {
            b -= a;
        }
        else
        {
            a -= b;
        }
    }
    return a;
}
int main()
{
    cout << "GCD is " << gcd(20, 40);
    return 0;
}