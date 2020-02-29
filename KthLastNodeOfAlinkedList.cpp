/*

Given a singly linked list, return the value of the kth last node (0-indexed). k is guaranteed not to be larger than the size of the linked list.

For example, given 10 -> 20 -> 30 -> 40 -> 50, and k = 1, return 40.

The linked list has the fields next and val.

Bonus: Can you do this in one pass?

Example 1
Input

node = 1 → 2
k = 1
Output

1
Explanation

The second last node has the val of 1

Example 2
Input

node = 0 → 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9
k = 2
Output

7
Explanation

Last node (index 0) has val of 9
Second last node (index 1) has val of 8
Third last node (index 2) has val of 7

*/


//1st way
int solve1(LLNode* node, int k) {
    // Write your code here
    LLNode * p =node;
    int len=0;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    int index=0;
    while(node!=NULL&& k < len)
    {
        if(k==(len-index-1)){
            return node->val;
        }
        index++;
        node=node->next;
    }
};

//second way
int solve2(LLNode* node, int k) {
    // Write your codehere
    vector<int> v;
    while(node!=NULL){
        v.push_back(node->val);
        node=node->next;
    }
    return v[v.size()-k-1];
   
};
