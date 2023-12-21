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

Node *reveresek(Node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    // step 1 reverseing
    int count = 0;
    Node *curr = head, *forward = NULL, *prev = NULL;
    while (count < k && curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step3 call
    if (forward != NULL)
    {
        head->next = reveresek(forward, k);
    }
    return prev;
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
    print(head);
    cout << "Reverse after k " << endl;
    Node *reverse = reveresek(head, 2);
    print(reverse);
    return 0;
}