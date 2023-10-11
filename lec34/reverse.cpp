#include <iostream>
using namespace std;
void reverse(string &name, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(name[s], name[e]);
    reverse(name, s + 1, e - 1);
}
int main()
{
    string name = "mom1";
    cout << "B4 swap:" << name;
    int e = name.length() - 1;
    reverse(name, 0, e);
    cout << endl
         << name;

    return 0;
}