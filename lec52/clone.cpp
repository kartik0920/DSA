// leetcode 138
// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
private:
    void inserttail(Node *&tail, int data)
    {
        Node *insert = new Node(data);
        tail->next = insert;
        tail = insert;
    }

public:
    Node *copyRandomList(Node *head)
    {
        Node *clonehead = new Node(-1), *clonetail = clonehead;
        Node *temp = head;
        while (temp != NULL)
        {
            inserttail(clonetail, temp->val);
            temp = temp->next;
        }
        clonehead = clonehead->next;

        // step 2 mapping
        Node *original = head, *clonenode = clonehead;
        unordered_map<Node *, Node *> mapping;
        while (original != NULL)
        {
            mapping[original] = clonenode;
            clonenode = clonenode->next;
            original = original->next;
        }

        original = head;
        clonenode = clonehead;
        while (original != NULL)
        {
            clonenode->random = mapping[original->random];
            clonenode = clonenode->next;
            original = original->next;
        }
        return clonehead;
    }
};