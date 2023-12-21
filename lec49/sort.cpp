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

// sort by count method
Node *Sorted(Node *head)
{
    int zerocnt = 0, onecnt = 0, twocount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocnt++;
        }
        else if (temp->data == 1)
        {
            onecnt++;
        }
        else if (temp->data == 2)
        {
            twocount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zerocnt != 0)
        {
            temp->data = 0;
            zerocnt--;
        }
        else if (onecnt != 0)
        {
            temp->data = 1;
            onecnt--;
        }
        else if (twocount != 0)
        {
            twocount--;
            temp->data = 2;
        }
        temp = temp->next;
    }
    return head;
}

void inserttail(Node *&tail, int data)
{
    Node *insert = new Node(data);
    tail->next = insert;
    tail = insert;
}
Node *Sorted1(Node *head)
{
    // making 3 ll and adding element at tial in it and merging them finally
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

    delete zerohead, onehead, twohead;
    return head;
}
int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(0);
    Node *node2 = new Node(1);
    Node *node3 = new Node(2);
    Node *node4 = new Node(1);
    Node *node5 = new Node(0);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    print(head);
    Node *rev = Sorted1(head);
    print(rev);
    return 0;
}