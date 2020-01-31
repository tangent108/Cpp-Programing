 #include<iostream>
 #include<queue>
 #include<map>
 #define null 0

 using namespace std;

 class Node {
     public:
     int data;
     Node *left;
     Node *right;
     Node(){}
     Node(int data){
         this->data=data;
         left=right=null;
     }
 };

 class Object{
     public:
     Node *node;
     int distance;
     Object(){}
     Object(Node *node,int diatance){
         this->node=node;
         this->distance = diatance;
         }
 };


 void bottomViewOfBinaryTree(Node *root){
    if(root==null){
        return ;
    }
    else{
        map<int,int> m;
        queue<Object> q;
        Object o(root,0);
        q.push(o);// or use q.push(Object(root,0));

        while(!q.empty()){
            Object o = q.front();
            q.pop();
            m[o.distance]=o.node->data;
            if(o.node->left!=null){
               // Object l(o.node->left,o.distance-1);
                q.push(Object(o.node->left,o.distance-1)); //or use q.push(l);
            }
            if(o.node->right!=null){

               // Object r(o.node->right,o.distance+1);
                q.push(Object(o.node->right,o.distance+1)); // or use q.push(r);
            } 
        }

        for(auto it:m){
            cout <<it.second << " ";
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
     
     cout <<"\n1.The bottom view of binary tree \n";
     bottomViewOfBinaryTree(root);

     Node *root2 = new Node(1);
     root2->left = new Node(2);
     root2->right= new Node(3);
     root2->left->left = new Node(4);
     root2->left->right = new Node(5);
     root2->right->left = new Node(6);
     root2->right->right=new Node(7);
     root2->right->left->right = new Node(8);
     cout <<"\n\n2.The bottom view of binary tree \n";
     bottomViewOfBinaryTree(root2);


/*

1.The bottom view of binary tree
4 10 6 8 7 9

2.The bottom view of binary tree
4 2 6 8 7

*/

}