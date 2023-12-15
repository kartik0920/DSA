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

Node *getMiddle(Node *head)
{
    Node *slow = head, *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node *getReverse(Node *head)
{
    Node *curr = head, *prev = NULL, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool Ispalimdrome(Node *head)
{
    if (head->next == NULL)
    {
        return 1;
    }

    Node *mid = getMiddle(head);

    Node *temp = mid->next;
    mid->next = getReverse(temp);
    
    Node *head1 = head, *head2 = mid->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    

    return 1;
}

int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(10);
    Node *node4 = new Node(01);
    // Node *node5 = new Node(50);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // node4->next = node5;
    print(head);
    if (Ispalimdrome(head))
    {
        cout << "It is palimdrome" << endl;
    }
    else
    {
        cout << "not a palimdrome" << endl;
    }
    return 0;
}