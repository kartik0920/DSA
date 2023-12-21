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
class Stack
{
private:
    Node *head = NULL;

public:
    Node *top = NULL;
    bool isEmpty();
    void push(int data);
    void pop();
    void peek();
};

void Stack::peek()
{
    if (top == NULL)
    {
        cout << "Empty stack!" << endl;
    }
    else
    {
        cout << top->data << ' ' << endl;
    }
}
void Stack::push(int data)
{
    Node *insert = new Node(data);
    if (top == NULL)
    {
        top = insert;
        head = top;
    }
    else
    {
        top->next = insert;
        top = insert;
    }
}
void Stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack is already empty!" << endl;
    }
    else if (top == head)
    {
        head = NULL;
        top = NULL;
    }
    else
    {
        Node *temp = head;

        while (temp->next != top)
        {
            temp = temp->next;
        }

        top->next = NULL;
        temp->next = NULL;
        top = temp;
    }
}
bool Stack::isEmpty()
{
    int ans = (top == NULL) ? 1 : 0;
    return ans;
}
int main()
{
    Stack S;
    S.peek();
    S.pop();
    S.push(5);
    S.peek();
    S.push(10);
    if (S.isEmpty())
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        cout << "Not empty stack" << endl;
    }
    S.peek();
    S.pop();
    S.peek();
    S.pop();
    S.pop();
    S.peek();
    return 0;
}