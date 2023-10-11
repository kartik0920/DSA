#include <iostream>
using namespace std;
long factorial(int n)
{
    int result = 1;
    if (n < 0)
    {
        cout << "pls enter non-negative number" << endl;
    }
    while (n != 0)
    {
        result *= n;
        n -= 1;
    }
    return result;
}
int main()
{
    cout << factorial(5);
    return 0;
}