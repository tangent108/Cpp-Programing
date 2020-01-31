 #include<iostream>
 #include<queue>
 #include<map>
 #include<list>
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


 void verticalOrderTraversal(Node *root){
    if(root==null){
        return ;
    }
    else{
        map<int,list<int> > m;
        queue<Object> q;
        Object o(root,0);
        q.push(o);// or use q.push(Object(root,0));

        while(!q.empty()){
            Object o = q.front();
            q.pop();
            m[o.distance].push_back(o.node->data);
            if(o.node->left!=null){
               // Object l(o.node->left,o.distance-1);
                q.push(Object(o.node->left,o.distance-1)); //or use q.push(l);
            }
            if(o.node->right!=null){

               // Object r(o.node->right,o.distance+1);
                q.push( Object(o.node->right,o.distance+1)); // or use q.push(r);
            } 
        }

        for(auto it:m){
            cout <<"["<< it.first<<"]->"; // remove this line if you do not want keys on output.
            for(auto element:it.second){
                cout <<element<<" ";
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
     root->right->left->left= new Node(10);
     root->right->right= new Node(7);
     root->right->right->left = new Node(8);
     root->right->right->right = new Node(9);
     
     cout <<"\nThe vertical order of tree \n";
     verticalOrderTraversal(root);
 /*

The vertical order of tree

keys->values

[-2]->4
[-1]->2 10
[0]->1 5 6
[1]->3 8
[2]->7
[3]->9


 */

 }