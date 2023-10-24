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
void Insearthead(Node *&head, int data)
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
        InsertTail(tail, data);
        return;
    }
    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}
int main()
{
    int n = 1;
    Node *n1 = new Node(50);
    Node *head = n1;
    Node *tail = n1;
    while (n != 0)
    {
        cout << "Choose\n1 - For insertion \n2 - For deletion \n0 - For exit\n:";
        cin >> n;
        switch (n)
        {
        case 1:
            int data, x;

            cout << "Enter \n1 - At head\n2 - At tail\n3 - Any position\n";
            cin >> x;
            cout << "Enter Data you want to insert:";
            cin >> data;

            switch (x)
            {
            case 1:
                Insearthead(head, data);
                break;
            case 2:
                InsertTail(tail, data);
                break;
            case 3:
                int position;
                cout << "Enter the position:";
                cin >> position;
                InsertAny(head, tail, position, data);
                break;
            default:
                cout << "Enter correct option1" << endl;
                break;
            }
            break;

        case 0:
            break;
        default:
            cout << "Choose the correct option!" << endl;
        }
    }
    print(head);
    cout << "Head is " << head->data << " while tail is " << tail->data << endl;
    return 0;
}