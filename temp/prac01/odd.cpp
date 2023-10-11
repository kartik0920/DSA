#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    if (n & 1)
    {
        cout << "It is odd";
    }
    else
    {
        cout << "It is even";
    }
    return 0;
}