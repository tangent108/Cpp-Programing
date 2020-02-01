#include<iostream>
#include<queue>

using namespace std;
class Node{
    public:
    Node * left;
    int data;
    Node *right;
    Node(){}
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

int numberOfLeafNodeIterative(Node * node){
    if(node==NULL){
        return 0;
    }
    else
    {
        queue<Node*> q;
        q.push(node);
        int numberOfLeafNodes = 0;
        while(!q.empty()){
            Node * node = q.front();
            q.pop();
            if(node->left==NULL && node->right==NULL){
                numberOfLeafNodes++;
            }
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }

        return numberOfLeafNodes;
    }
    
}

int numberOfLeafNodeRecursive(Node *node){

    if(node==NULL){
        return 0;
    }

    if(node->left==NULL && node->right==NULL){
        return 1;
    }

     int leftCount = numberOfLeafNodeRecursive(node->left);
     int rightCount = numberOfLeafNodeRecursive(node->right);
    return leftCount + rightCount;

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

    cout << "\n\nNumber of leaf Nodes by Iterative method : ";
    cout << numberOfLeafNodeIterative(root);

    cout << "\n\nNumber of leaf Nodes by Recursive method : ";
    cout << numberOfLeafNodeRecursive(root);
    return 0;

/*

Number of leaf Nodes by Iterative method : 5

Number of leaf Nodes by Recursive method : 5

*/


}