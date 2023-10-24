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

    Node(Node *obj)
    {
        this->data = obj->data;
        this->next = obj->next;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insert(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        InsertTail(tail, data);
    }

    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}
int main()
{
    Node *n1 = new Node(0);
    Node *head = n1;
    Node *tail = n1;
    // cout << NULL << endl;
    int n = 1;
    while (n != 0)
    {
        cout << "1-Isertion\n2-Deletion\n0-Exit\nChoose the correct option:";
        cin >> n;
        switch (n)
        {
        case 0:
            break;
        case 1:
            int x;
            cout << "1-At head\n2-At tail\n3-At any position\nChoose the correct option:";
            cin >> x;
            cout << "Enter the data: ";
            int data;
            cin >> data;
            switch (x)
            {
            case 1:
                InsertHead(head, data);
                break;
            case 2:
                InsertTail(tail, data);
                break;
            case 3:
                cout << "Enter the Position where you want to insert:";
                int pos;
                cin >> pos;
                insert(head, tail, pos, data);
                break;

            default:
                break;
            }
            break;

        default:
            cout << "Enter the correct option!" << endl;
            break;
        }
    }
    print(head);
    cout << "Head:" << head->data << endl;
    cout << "Tail:" << tail->data << endl;
    return 0;
}