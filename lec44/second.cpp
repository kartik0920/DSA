#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    Node *prev;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << value << " was deleted!" << endl;
    }
};

void print(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\nhead is ->" << head->data << endl;
    cout << "tail is ->" << tail->data << endl;
}

void InsertHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void Inserttail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void Insert(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        Inserttail(head, tail, data);
        return;
    }
    Node *Toinsert = new Node(data);
    Toinsert->prev = temp;
    temp->next->prev = Toinsert;
    Toinsert->next = temp->next;

    temp->next = Toinsert;
}
void DeleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    int cnt=1;
    Node* current = head;
    Node *prev = NULL;
    while(cnt<position){
        prev = current;
        current = current->next;
        cnt++;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Inserttail(head, tail, 60);
    InsertHead(head, tail, 50);
    InsertHead(head, tail, 40);
    Inserttail(head, tail, 70);
    Insert(head, tail, 2, 45);
    print(head, tail);
    DeleteNode(head, tail, 1);
    print(head, tail);
    return 0;
}