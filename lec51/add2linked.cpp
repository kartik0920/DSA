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
    print(head);
    return 0;
}