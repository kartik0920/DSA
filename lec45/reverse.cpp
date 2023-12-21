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

Node *reverse(Node *head)
{
    // iterative loop
    /*
    Node *current = head, *prev = NULL;
    while (current != NULL)
    {
        Node *forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    return prev;
    */

    // recusrive way
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *samllhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return samllhead;
}

int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(head);
    cout << "Reverse the string" << endl;
    Node *reversed_ll = reverse(head);
    print(reversed_ll);
    return 0;
}
