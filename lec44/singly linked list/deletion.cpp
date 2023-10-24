#include"insertion.cpp"
#include<iostream>
using namespace std;
void deleteByposi(int position,Node* &head,Node* &tail){
    if(position==1){
        Node* temp=head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *current = head;
        Node *prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev=current;
            current = current->next;
            cnt++;
        }
       
        prev->next=current->next;
        if (current->next == NULL)
        {
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
}

void deleteByvalue(int value,Node *head,Node* &tail){
    Node *prev = NULL;
    Node *current = NULL;
    
    while(current->next!=NULL){
        cout << current->data<<" ";
        if(current->data==value){
            prev->next = current->next;
            current->next = NULL;
            delete current;
        }
        prev = current;
        current = current->next;
    }
}