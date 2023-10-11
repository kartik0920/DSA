#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter the symbol of operation:";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a<<op<<b<<"="<<a+b;
        break;
    case '-':
        cout<<a<<op<<b<<"="<<a-b;
        break;
    case '*':
        cout<<a<<op<<b<<"="<<a*b;
        break;
    case '/':
        cout<<a<<op<<b<<"="<<a/b;
        break;
    case '%':
        cout<<a<<op<<b<<"="<<a%b;
        break;
   
    default:
        cout<<"Enter correct operand";
        break;
    }
}