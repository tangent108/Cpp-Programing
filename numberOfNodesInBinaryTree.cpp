#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node (){}
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

int numberOfNodesInBinaryTreeIterative(Node *root){
    if(root==NULL){
        return 0;
    }
    else
    {
        queue<Node*> q;
        q.push(root);
        int numberOfNodes=0;
        while(!q.empty()){
            Node * node = q.front();
            q.pop();
            numberOfNodes++;
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        return numberOfNodes;
    } 
}
int numberOfNodesInBinaryTreeRecursive(Node *root){
    if(root==NULL){
        return 0;
    }
    else
    {
        int leftCount = numberOfNodesInBinaryTreeRecursive(root->left);
        int rightCount = numberOfNodesInBinaryTreeRecursive(root->right);
        return leftCount + rightCount +1;
    }
    
}

int main(){
    Node * root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right= new Node(5);
     root->right->left= new Node(6);
     root->right->right= new Node(7);
     root->right->left->left= new Node(10);
     root->right->right->left = new Node(8);
     root->right->right->right = new Node(9);
     cout <<"\nThe total number of nodes in the binary Tree Iterative method : ";
     cout << numberOfNodesInBinaryTreeIterative(root)<<endl;
     cout <<"\n\nThe total number of nodes in the binary Tree Recursive method : ";
     cout << numberOfNodesInBinaryTreeRecursive(root)<<endl;
     return 0;

/*

The total number of nodes in the binary Tree Iterative method : 10


The total number of nodes in the binary Tree Recursive method : 10

*/

}
