#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr, size, top = -1;

public:
    Stack()
    {
        cout << "Enter size of the array:";
        cin >> this->size;
        arr = new int[size];
    }
    bool isEmpty();
    void push(int data);
    void pop();
    void peek();
};
bool Stack::isEmpty()
{
    return (top < 0) ? 1 : 0;
}
void Stack::push(int data)
{
    if (size - top > 1)
    {

        arr[++top] = data;
    }
    else
    {
        cout << "Stack is overflown" << endl;
    }
}
void Stack::pop()
{
    if (top >= 0)
    {
        top--;
    }
    else
    {
        cout << "Stack is underflown" << endl;
    }
}
void Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << arr[top] << endl;
    }
}
int main()
{
    Stack S;
    // if (S.isEmpty())
    // {
    //     cout << "Stack is empty!" << endl;
    // }
    // else
    // {
    //     cout << "Stack is not empty!" << endl;
    // }
    S.push(1);
    S.peek();
    S.pop();
    S.pop();
    S.pop();
    S.peek();
    return 0;
}