// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
void SortedInsert(stack<int> &St, int num)
{
    if (St.empty() || (!St.empty() && St.top() < num))
    {
        St.push(num);
        return;
    }
    int x = St.top();
    St.pop();
    SortedInsert(St, num);
    St.push(x);
}
void sortStack(stack<int> &St)
{
    if (St.empty())
    {
        return;
    }
    int num = St.top();
    St.pop();
    sortStack(St);
    SortedInsert(St, num);
}