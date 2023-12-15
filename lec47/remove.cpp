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

// Floyds detection
Node *Floyds(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head, *fast = head;
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
Node *start(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = Floyds(head);
    Node *temp = head;
    if (intersection == NULL)
    {
        return NULL;
    }
    while (temp != intersection)
    {
        temp = temp->next;
        intersection = intersection->next;
    }
    cout << "This is where the loop star " << temp->data << endl;
    return temp;
}

void removeloop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = start(head);
    Node *ref = temp;
    while (temp->next != ref)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    node5->next = head;
    // Node *begining = start(head);
    removeloop(head);
    print(head);
    // cout << "Loop is from this node " << endl;
    return 0;
}