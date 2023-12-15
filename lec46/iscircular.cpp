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
        this->next = next;
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

bool Iscircular(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return 0;
    }
    Node *temp = head->next;
    if (head->next == head)
    {
        return 1;
    }
    if (head->next == NULL)
    {
        return 0;
    }
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return 1;
    }
    return 0;
}
int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = head;
    // print(head);
    if (Iscircular(head))
    {
        cout << "It is circular:" << endl;
    }
    else
    {
        cout << "Not circular!" << endl;
    }
    return 0;
}