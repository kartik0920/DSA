#include <iostream>
#include <stack>

using namespace std;
int main()
{
    string input;
    cin >> input;
    stack<char> s;
    for (int i = 0; i < input.length(); i++)
    {
        s.push(input[i]);
    }
    cout << s.size() << endl;
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout << ans << " is answer" << endl;

    return 0;
}