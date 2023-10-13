#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is bigger";
    }
    else if (a == b)
    {
        cout << "a and b are  equal" << endl;
    }
    else
    {
        cout << "b is bigger" << endl;
    }
    return 0;
}