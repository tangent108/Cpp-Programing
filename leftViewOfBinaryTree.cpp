#include<iostream>
#include<queue>
#define null 0

using namespace std;

class Node{
    public:
    Node *left;
    int data;
    Node *right;
    Node(){}
    Node(int data){
        this->data = data;
        left=right=null;
    }
};

void leftViewOfBinaryTree(Node *root){
    if(root==null){
        return ;
    }
    else{
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){

            int queueSize = q.size();
            int count = queueSize;
            while(count > 0){
                Node *node = q.front();
                q.pop();
                if(count==queueSize){
                    cout << node->data<<" ";
                }

                if(node->left!=null){
                    q.push(node->left);
                }
                if(node->right!=null){
                    q.push(node->right);

                }
                count--;
            }

        }
    }
}

int main(){
    Node * root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right= new Node(5);
     root->right->left= new Node(6);
     root->right->left->left= new Node(10);
     root->right->right= new Node(7);
     root->right->right->left = new Node(8);
     root->right->right->right = new Node(9);

     cout <<"\nThe left view of binary tree \n";
     leftViewOfBinaryTree(root);


/*

The left view of binary tree
1 2 4 10

*/


}