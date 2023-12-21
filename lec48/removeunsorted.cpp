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

Node *unique(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        while (temp != NULL && curr->next != NULL)
        {
            if (curr->data == temp->data)
            {
                curr->next = curr->next->next;
            }
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    3 Node *node4 = new Node(50);
    Node *node5 = new Node(30);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    print(head);
    Node *reverse = unique(head);
    print(reverse);
    return 0;
}