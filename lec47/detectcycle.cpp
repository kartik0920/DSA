#include <iostream>
#include <map>
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
// This was by the mapped method
bool detectloop(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    Node *temp = head;
    map<Node *, bool> visited;
    while (temp != NULL)
    {
        if (visited[temp] == 1)
        {
            return 1;
        }
        visited[temp] = 1;
        temp = temp->next;
    }
    return 0;
}

// Floyds detection
bool Floyds(Node *head)
{
    if (head == NULL)
    {
        return 0;
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
            return 1;
        }
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
    // node5->next = node4;
    if (Floyds(head))
    {
        cout << "Loop present!" << endl;
    }
    else
    {
        cout << "Loop absent" << endl;
    }
    return 0;
}