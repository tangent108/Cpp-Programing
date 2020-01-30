#include<iostream>
#include<queue>
#include<stack>
#define null 0

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

void iterativeLevelOrderTraversal(Node *root){
    int height=0;
    if(root==NULL){
        return ;
    }
    else
    {
        queue<Node *> q;
        q.push(root);

        while(!q.empty()){
            int len = q.size();
            while(len > 0 )
            {
                Node * front =q.front();
                cout << front->data <<", ";
                q.pop();
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
                len--;
            }
             cout<<"\n";
             height++;
    }
  }
  cout << "\nHaving Height of tree : "<<height<<endl;
    
}

void iterativeInorderTraversal(Node *root){

    if(root==null){
        return ;
    }
    else
    {
        stack<Node*> s;
        Node * node = root;
        while(node!=NULL || s.size() > 0){

            if(node!=NULL){
                s.push(node);
                node = node->left;
            }
            else
            {
                node = s.top();
                s.pop();
                cout << node->data<<" ";
                node=node->right;
            }
            
        }
    }
}

void iterativePreorderTraversal(Node *root){
    if(root==null){
        return ;
    }
    else
    {
        stack < Node * > s;
        Node * node = root;
        while(node!=null || s.size() > 0){
            if(node!=null){
                cout << node->data<<" ";
                s.push(node);
                node = node->left;
            }
            else{
                node = s.top();
                s.pop();
                node=node->right;
            }
        }
    }
}

void iterativePostorderTraversal(Node *root){

    if(root==null){
        return;
    }
    else{
        stack<Node *> s1,s2;
        Node * node = root;
        while(node!=null || s1.size() > 0){

            if(node!=null){
                s1.push(node);
                s2.push(node);
                node=node->right;
            }
            else
            {
                node = s1.top();
                s1.pop();
                node= node->left;
 
            }
            
        }

        while(s2.size() > 0){
            cout << s2.top()->data<<" ";
            s2.pop();
        }
    }



}


int main()
{
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

    cout <<"\nThe iterative level order traversal \n";
    iterativeLevelOrderTraversal(root);

    cout <<"\n\nIterative Inorder traversal \n";
    iterativeInorderTraversal(root);

    cout <<"\nThe preorder traversal of tree \n";
    iterativePreorderTraversal(root);

    cout<< "\nThe postorder traversal of tree\n";
    iterativePostorderTraversal(root);
    return 0;
}
