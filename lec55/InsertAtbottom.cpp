// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
void solve(stack<int> &S, int x)
{
    if (S.empty())
    {
        S.push(x);
        return;
    }
    int num = S.top();
    S.pop();
    solve(S, x);
    S.push(num);
}
stack<int> pushAtBottom(stack<int> &S, int x)
{
    solve(S, x);
    return S;
}
