#include <iostream>
using namespace std;
int reaching_n_step(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = reaching_n_step(n - 1) + reaching_n_step(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int ans = reaching_n_step(n);
    cout << "No of ways to reach step " << n << " is " << ans << endl;
    return 0;
}