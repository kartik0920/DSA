#include <iostream>
using namespace std;
bool check(string name, int s, int e)
{
    if (s > e)
    {
        return 1;
    }
    if (name[s] != name[e])
    {

        return 0;
    }
    else
    {
        return check(name, s + 1, e - 1);
    }
}
int main()
{
    string name = "racecar";
    bool ans = check(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "It is palimdorme" << endl;
    }
    else
    {
        cout << "It is not a plaimdrome!" << endl;
    }
    return 0;
}