#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int CountofPrime(int n)
{
    vector<bool> points(n + 1, 1);
    points[0] = points[1] = 0;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (points[i])
        {
            count += 1;
            for (int j = i; j < n; j += i)
            {

                points[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    cout << CountofPrime(5000000);
    return 0;
}