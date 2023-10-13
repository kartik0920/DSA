#include <stdio.h>
#include <stdlib.h>
// creating a structure i.e nodes
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// creaing a new structure
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{

    struct node *root = newNode(1);
    /*
        1
    */
    root->left = newNode(2);
    root->right = newNode(3);
    /*
            1
           / \
          2   3
    */
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    /*
         1
        / \
       2   3
      / \
    4    5
    */
    return 0;
}
