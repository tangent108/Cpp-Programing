/*

Given a singly linked list whose values are integers, determine whether the linked list forms a palindrome. A palindrome is defined as a sequence whose values are the same read forward and backwards.

For example, 5 -> 3 -> 5 is a palindrome, whereas 5 -> 3 -> 6 is not.

Example 1
Input

node = 5 → 3 → 5
Output

true
Explanation

5 -> 3 -> 5 is a palindrome.

Example 2
Input

node = 12 → 8 → 12
Output

true
Explanation

The values of the linked list are the same forwards and backwards.

*/





/**
 * class LLNode {
 *   public:
 *     int val;
 *     LLNode *next;
 * };
 */
bool solve(LLNode* node) {
    // Write your code here
    stack<int> s;
    LLNode * p=node;
    int len=0;
    while(p!=NULL){
        s.push(p->val);
        p=p->next;
        len++;
    }
    int mid=0;
    while(node!=NULL && mid < (len/2) ){
        int top=s.top();
        s.pop();
        if(node->val!=top)
        return false;
        node=node->next;
        mid++;
    }
    return true;
};
