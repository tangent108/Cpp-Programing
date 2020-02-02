#include<iostream>
using namespace std;

class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node(){}
    Node(int data){
        this->data = data;
        left=right=NULL;
    }
};


void leftOfBinaryTreeExceptLastNode(Node *node){
    if(node==NULL){
        return;
    }
    if(node->left==NULL && node->right==NULL){
        return;
    }
    cout << node->data<<" ";
    leftOfBinaryTreeExceptLastNode(node->left);

}

void printLeafNodes(Node *node){
    if(node==NULL){
        return ;
    }
    if(node->left==NULL && node->right==NULL){
        cout <<node->data<<" ";
    }
    printLeafNodes(node->left);
    printLeafNodes(node->right);
}

void rightOfBinaryTreeExceptLastNode(Node *node){
    if(node==NULL){
        return ;
    }
    if(node->left == NULL && node->right == NULL){
        return ;
    }
    // post order but pass only right child of nodes
    rightOfBinaryTreeExceptLastNode(node->right);
    cout << node->data<<" ";
}

void boundaryTraversalOfBinaryTree(Node *node){

    cout<< "\nThe Boundary Traversal of Binary Tree : ";
    leftOfBinaryTreeExceptLastNode(node);
    printLeafNodes(node);
    rightOfBinaryTreeExceptLastNode(node->right);
    cout<<"\n";
}

int main(){

    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->left->right->right = new Node(9);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->left->left->left = new Node(5);
    boundaryTraversalOfBinaryTree(root);

    Node * root2 = new Node(1);
     root2->left = new Node(2);
     root2->right = new Node(3);
     root2->left->left = new Node(4);
     root2->left->right= new Node(5);
     root2->right->left= new Node(6);
     root2->right->right= new Node(7);
     root2->right->left->left= new Node(10);
     root2->right->right->left = new Node(8);
     root2->right->right->right = new Node(9);
     boundaryTraversalOfBinaryTree(root2);
    return 0;
/*

The Boundary Traversal of Binary Tree : 1 2 4 5 9 7 8 3

The Boundary Traversal of Binary Tree : 1 2 4 5 10 8 9 7 3

*/

}
