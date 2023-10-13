#include <iostream>
using namespace std;
// no of one bit in an integer
int onebit(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            ans += 1;
        }
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n = 7;
    int ans = onebit(n);
    cout << "The ans is " << ans << endl;
    return 0;
}