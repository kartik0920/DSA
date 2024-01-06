class Solution
{
public:
    void Insert(stack<int> &St, int x)
    {
        if (St.empty())
        {
            St.push(x);
            return;
        }
        int num = St.top();
        St.pop();
        Insert(St, x);
        St.push(num);
    }
    void Reverse(stack<int> &St)
    {
        if (St.empty())
        {
            return;
        }
        int num = St.top();
        St.pop();
        Reverse(St);
        Insert(St, num);
    }
};