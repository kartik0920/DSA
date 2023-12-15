#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
        this->next = next;
    }
};
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}

ListNode *loop(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}
ListNode *start(ListNode *head)
{
    ListNode *inter = loop(head);
    ListNode *slow = head;
    while (inter != slow)
    {
        slow = slow->next;
        inter = inter->next;
    }
    return slow;
}
int main()
{
    ListNode *head = new ListNode(0);
    ListNode *node1 = new ListNode(10);
    ListNode *node2 = new ListNode(20);
    ListNode *node3 = new ListNode(30);
    ListNode *node4 = new ListNode(40);
    ListNode *node5 = new ListNode(50);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;
    // print(head);
    ListNode *begin = start(head);
    cout << "The begin of loop is " << begin->val << endl;
    return 0;
}