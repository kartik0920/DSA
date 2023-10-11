#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int bin;
    cout << "Enter binary number";
    cin >> bin;
    int ans = 0, i = 0;
    while (bin != 0)
    {
        int rem = bin % 10;
        if (rem == 1)
        {
            ans += (pow(2, i));
        }
        i += 1;
        bin /= 10;
    }
    cout << ans;
    return 0;
}