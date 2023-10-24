
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node(Node *obj)
    {
        this->data = obj->data;
        this->next = obj->next;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        // cout << "Deletion of value is done!" << endl;
    }
    
};

