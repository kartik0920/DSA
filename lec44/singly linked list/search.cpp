#include"deletion.cpp"
bool searchValue(Node* head,int key){
    Node *temp = head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp = temp->next;
    }
}