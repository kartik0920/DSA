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

void inserttail(Node *&tail, int data)
{
    Node *insert = new Node(data);
    tail->next = insert;
    tail = insert;
}
Node *sort(Node *head)
{
    Node *zerohead = new Node(-1);
    Node *onehead = new Node(-1);
    Node *twohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onetail = onehead;
    Node *twotail = twohead;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            inserttail(zerotail, 0);
        }
        else if (temp->data == 1)
        {
            inserttail(onetail, 1);
        }
        else if (temp->data == 2)
        {
            inserttail(twotail, 2);
        }
        temp = temp->next;
    }
    if (onehead->next == NULL)
    {
        zerotail->next = twohead->next;
    }
    else
    {
        zerotail->next = onehead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;
    head = zerohead->next;
    delete zerohead, twohead, onehead;
    return head;
}
int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(2);
    Node *node4 = new Node(0);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(head);
    Node *reverse = sort(head);
    print(reverse);
    return 0;
}