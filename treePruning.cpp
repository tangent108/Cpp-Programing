/*

Given a binary tree where all nodes are either 0 or 1, prune the tree so that subtrees containing all 0s are removed.

For example, given the following tree:

   0
  / \
 1   0
    / \
   1   0
  / \
 0   0
should be pruned to:

   0
  / \
 1   0
    /
   1
We do not remove the tree at the root or its left child because it still has a 1 as a descendant.

Example 1
Input

root = {val: 0, left: {val: 1, left: null, right: null}, right: {val: 0, left: {val: 1, left: {val: 0, left: null, right: null}, right: {val: 0, left: null, right: null}}, right: {val: 0, left: null, right: null}}}
Output

{val: 0, left: {val: 1, left: null, right: null}, right: {val: 0, left: {val: 1, left: null, right: null}, right: null}}

*/



/**
 * class Tree {
 *   public:
 *     int val;
 *     Tree *left;
 *     Tree *right;
 * };
 */
 
 int dfs(Tree* root)
{
    if(root == nullptr)
        return 0;
    if(dfs(root->left) == 0)
       root->left = nullptr;
    if(dfs(root->right) == 0)
        root->right = nullptr;
    return max({dfs(root->left),dfs(root->right),root->val});
}

Tree* Solution::solve(Tree* root) {
    dfs(root);
    return root;
};
