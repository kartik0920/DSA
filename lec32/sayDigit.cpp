#include <iostream>
using namespace std;
void saynumbers(int n, string names[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    // printing b4
    // cout << names[digit] << endl;
    saynumbers(n / 10, names);
    cout << names[digit] << endl;
}
int main()
{
    string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the number:";
    cin >> n;
    saynumbers(n, digits);
    return 0;
}