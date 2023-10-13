#include <iostream>
using namespace std;
void count(int n)
{
    if (n == 0)
    {
        return;
    }
    // for ascending order
    /*
    count(n - 1);
    cout << n << endl;
    */

    cout << n << endl;
    count(n - 1);
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    count(n);
    return 0;
}