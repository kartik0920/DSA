#include <iostream>
using namespace std;

// time complexity----->O(b)
/*
int exp(int a, int b)
{
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    return result;
}*/
// time complexity----->O(log(b))

int exp(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = result * a;
        }
        a *= a;
        b = b >> 1; // divide by 2
    }
    return result;
}
int main()
{
    cout << exp(2, 3);
    return 0;
}