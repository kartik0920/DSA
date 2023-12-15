#include <iostream>
#include <vector>
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

bool checkpalimdrme(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;
    while (e >= s)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool Ispalimdrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkpalimdrme(arr);
}
int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(10);
    Node *node4 = new Node( 0);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
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