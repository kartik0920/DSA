#include <iostream>
using namespace std;
class Node{
        public:
        int data;
        Node* next;
        Node *prev;


        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

void print(Node* head){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data<<' ';
            temp = temp->next;
        }
        cout << endl;
}