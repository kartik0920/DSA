// leetcode 20
class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> S;
        for (int i = 0; i < str.size(); i++)
        {
            char Ch = str[i];
            if (Ch == '{' || Ch == '(' || Ch == '[')
            {
                S.push(Ch);
            }
            else
            {
                if (!S.empty())
                {
                    char top = S.top();
                    if (Ch == '}' && top == '{' || Ch == ']' && top == '[' || Ch == ')' && top == '(')
                    {
                        S.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
        }
        return S.empty() ? 1 : 0;
    }
};