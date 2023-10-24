#include <iostream>
#include "search.cpp"
using namespace std;
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    
    Node *head = NULL;
    Node *tail = NULL;
    // cout << NULL << endl;
    int n = 1;
    while (n != 0)
    {
        cout << "1-Isertion\n2-Deletion\n3-Searching\n0-Exit\nChoose the correct option:";
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
                InsertHead(head,tail, data);
                break;
            case 2:
                InsertTail(head,tail, data);
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

        case 2:
            cout << "1-With position\n2-With value\nChoose the option";

            cin >> x;
            switch (x)
            {
            case 1:
                cout << "Enter the position you want to delete:";
                int position;
                cin >> position;
                deleteByposi(position, head, tail);
                break;
            case 2:
                int value;
                cout << "Enter the value:";
                cin>>value;
                deleteByvalue(value, head, tail);
               
                break;
            default:
                cout << "Enter the correct value!";
            }
            break;


        case 3:
            cout << "Enter the element you want to search:";
            int key;
            cin >> key;
            if(searchValue(head,key)){
                cout << "Key was found!" << endl;

            }
            else{
                cout << "Key was not found!" << endl;
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