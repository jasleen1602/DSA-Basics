//Binary Tree implementation and traversal
#include <iostream>
using namespace std;

struct Node
{
    struct Node *left = NULL;
    struct Node *right = NULL;
    int data;
};

void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    struct Node *n1 = new struct Node; //root
    struct Node *n2 = new struct Node; //left to root
    struct Node *n3 = new struct Node; //right to root
    struct Node *n4 = new struct Node; //left to left of root
    struct Node *n5 = new struct Node; //right to left of root
    struct Node *n6 = new struct Node; //left to right of root
    struct Node *n7 = new struct Node; //right to right of root

    n1->data = 5;
    n2->data = 10;
    n3->data = 34;
    n4->data = 75;
    n5->data = 20;
    n6->data = 89;
    n7->data = 17;

    //LINKING NODES
    /*        5
            /   \
           10     34
          / \     / \
         75  20 89  17
    */
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->right = n7;
    n3->left = n6;

    cout << "INORDER TRAVERSAL: ";
    inorder(n1);
    cout << endl
         << "PREORDER TRAVERSAL: ";
    preorder(n1);
    cout << endl
         << "POSTORDER TRAVERSAL: ";
    postorder(n1);
    return 0;
}