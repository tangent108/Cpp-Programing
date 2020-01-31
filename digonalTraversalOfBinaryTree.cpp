#include<iostream>
#include<list>
#include<map>
#include<queue>

using namespace std;

class Node{
    public:
    Node *left;
    int data;
    Node* right;
    Node(){}
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

class Object{
    public:
    Node *node;
    int distance;
    Object(){}
    Object(Node *node,int distance):node(node),distance(distance){}
};

void diagonalTraversalOfBinaryTree(Node *root){
    if(root==NULL){
        return;
    }
    else
    {
        map<int,list<int> > m;
        queue<Object> q;
        q.push(Object(root,0));
        while(!q.empty()){
            Object obj = q.front();
            q.pop();
            m[obj.distance].push_back(obj.node->data);
            if(obj.node->left){
                q.push(Object(obj.node->left,obj.distance+1));
            }
            if(obj.node->right){
                q.push(Object(obj.node->right,obj.distance));
            }
        }
        for(auto it : m){
            for(auto element :it.second){
                cout << element<< " ";
            }
            cout<<"\n";
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
     root->right->right= new Node(7);
     root->right->left->left= new Node(10);
     root->right->right->left = new Node(8);
     root->right->right->right = new Node(9);
     cout <<"\nThe Digonal Traversal of the Binary tree \n";
     diagonalTraversalOfBinaryTree(root);
/*

The Digonal Traversal of the Binary tree
1 3 7 9
2 5 6 8
4 10

*/

}