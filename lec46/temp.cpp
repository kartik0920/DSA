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

Node *Reversek(Node *head, int k)
{
    // base
    if (head == NULL)
    {
        return NULL;
    }

    // iteration in loop
    int count = 0;
    Node *forward = NULL, *curr = head, *prev = NULL;
    while (count < k && curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // recursice call
    if (forward != NULL)
    {
        head->next = Reversek(forward, k);
    }

    return prev;
}

bool Iscircular(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty list!" << endl;
        return 1;
    }
    if (head->next == head)
    {
        return 1;
    }
    if (head->next == NULL)
    {
        return 0;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        cout << "temp fata is " << temp->data << endl;
        temp = temp->next;
    }

    if (temp == head)
    {
        cout << "temp :" << temp->data << endl;
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
    // node4->next = head;
    // node5->next = head;
    // print(head);
    // Node *temp = Reversek(head, 2);
    // print(temp);
    if (Iscircular(head))
    {
        cout << "It is circular" << endl;
    }
    else
    {
        cout << "It is not circular" << endl;
    }
    return 0;
}