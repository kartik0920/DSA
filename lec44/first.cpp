#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor is used for adding data while initialzation
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Delete done\n";
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}
void Insearthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void TailInsert(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void InsertAny(Node *&head, Node *&tail, int position, int data)
{
    Node *temp = head;
    int count = 1;
    if (position == 1)
    {
        Insearthead(head, data);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next = NULL)
    {
        TailInsert(tail, data);
        return;
    }
    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}
void DeleteNode(int position, Node *&head)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *current = head;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main()
{

    // creating a node i.e no connection here
    /*
    Node *node1 = new Node(6);
    // node1->data=30; can sed to acces value
    cout << node1->data << endl;
    cout << node1->next << endl;*/

    //   singly linked l;ist

    // insertion at head
    Node *n1 = new Node(5);
    Node *head = n1;
    Node *tail = n1;
    // HeadInsert(head, 7);
    // HeadInsert(head, 9);
    // print(head);

    TailInsert(tail, 54);
    TailInsert(tail, 125);
    DeleteNode(1, head);
    print(head);

    return 0;
}
