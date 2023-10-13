#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << " enter number:";
    cin >> a;
    int ans = factorial(a);
    cout << "The factorail of " << a << " is " << ans << endl;
    return 0;
}