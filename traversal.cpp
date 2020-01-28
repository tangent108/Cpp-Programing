#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(){}
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int height(Node* node){
   if(node==NULL){
       return 0;
   }
   if(node->left==NULL && node->right==NULL){
       return 1;
   }
   int lh = height(node->left);
   int rh = height(node->right);
   return max(lh,rh) +1; 
}

void preOrderTraversal(Node *node){
    if(node == NULL){
        return;
    }
    else
    {
        cout << node->data << ", ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
        
    }
}

void inOrderTraversal(Node *node){
    if(node == NULL){
        return ;
    }
    else{
        inOrderTraversal(node->left);
        cout << node->data << ", ";
        inOrderTraversal(node->right);
    }
}
void postOrderTraversal(Node *node){
       if(node == NULL){
        return;
    }
    else
    {
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << ", ";
        
    }

}

int main(){
    Node *root;
    root = new Node(6);
    root->left = new Node(5);
    root->right = new Node(7);
    root->right->left = new Node(3);
    root->right->right = new Node(4);
    root->right->left->left = new Node(2);
    root->right->left->right = new Node(1);
    root->right->left->right->right = new Node(0);

    cout<<"\nThe height of tree is : "<< height(root)<<endl;
    cout << "\nPreorder traversal : ";
    preOrderTraversal(root);
    cout << "\nInorder traversal : ";
    inOrderTraversal(root);
    cout << "\nPostorder traversal : ";
    postOrderTraversal(root);

}
