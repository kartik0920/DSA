#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

Node *solve(Node *first, Node *second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first, *next1 = first->next;
    Node *curr2 = second, *next2 = second->next;

    while (curr2 != NULL && next1 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node *merge(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}
int main()
{
    Node *first = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(30);
    Node *node3 = new Node(50);
    Node *node4 = new Node(100);
    first->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *second = new Node(20);
    Node *node5 = new Node(40);
    Node *node6 = new Node(60);
    Node *node7 = new Node(80);
    Node *node8 = new Node(100);
    second->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    print(first);
    print(second);

    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *merged_list = merge(first, second);
    print(merged_list);
    return 0;
}