//Binary Search Tree implementation
#include <iostream>
using namespace std;

struct Node
{
    struct Node *left = NULL;
    struct Node *right = NULL;
    int data;
};

class BST{
    public:
    struct Node* root;
    BST() {
    root = NULL;
    }
    
    struct Node* search(struct Node* root, int val){
        if(root==NULL)
            return NULL;
        if(root->data==val)
            return root;
        else if(root->data<val)
            root = search(root->right, val);
        else
            root = search(root->left, val)
        return root;
    }

    struct Node* insert(struct Node* root, int val){
        struct Node* new_node = new struct Node;
        new_node->data = val;
        if(root==NULL){
            root=new_node;
            return root;
        }
        if(val<root->data&&root->left==NULL)
            root->left=new_node;
        else if(val>root->data&&root->right==NULL)
            root->right=new_node;
        else if(val<root->data&&root->left!=NULL)
            root->left=insert(root->left, val);
        else if(val>root->data&&root->right!=NULL)
            root->right=insert(root->right, val);
        return root;
    }
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
    /*        15
            /    \
           10     34
          / \     / \
         5  12  20  40
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