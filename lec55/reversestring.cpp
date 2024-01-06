#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string Input;
    cin >> Input;
    stack<char> s;
    string ans;
    for (int i = 0; i < Input.length(); i++)
    {
        s.push(Input[i]);
    }
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout << ans;
    return 0;
}