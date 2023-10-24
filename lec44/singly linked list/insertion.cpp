#include "Node.cpp"

void InsertHead(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void InsertTail(Node *&head, Node *&tail, int data)
{
    if (tail == nullptr)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insert(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == nullptr)
    {
        InsertTail(head, tail, data);
    }

    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}
