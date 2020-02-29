
/*

Suppose an arithmetic expression is given as a binary tree. Each leaf is an integer (represented as a string) and each internal node is one of '+', '−', '∗', or '/'.

Given the root to such a tree, write a function to evaluate it.

For example, given the following tree:

    *
   / \
  +    +
 / \  / \
3  2  4  5
You should return 45, as it is (3 + 2) * (4 + 5).

Note: The integers are represented as strings, so you have to convert them an integer.

Example 1
Input

root = {val: "+", left: {val: "2", left: null, right: null}, right: {val: "3", left: null, right: null}}
Output

5
Explanation

is at the root and 2 and 3 are at the leaves, so 2 + 3 = 5.
Example 2
Input

root = {val: "+", left: {val: "-", left: {val: "4", left: null, right: null}, right: {val: "2", left: null, right: null}}, right: {val: "3", left: null, right: null}}
Output

5
Explanation

We have a tree that looks like (4 - 2) + 3 = 5.

*/


/**
 * class Tree {
 *   public:
 *     std::string val;
 *     Tree *left;
 *     Tree *right;
 * };
 */
 bool IsLeaf(Tree* node) {
    return !node->left && !node->right;
}

int ToInt(string& s) {
    stringstream ss(s);
    int n;
    ss >> n;
    return n;
}

map<string, std::function<int(int, int)>> mapa;



int Calculate(Tree* node) {
    if (!node) {
        return 0;
    }
    if (IsLeaf(node)) {
        return ToInt(node->val);
    }
    int left_ans = Calculate(node->left);
    int right_ans = Calculate(node->right);
    return mapa[node->val](left_ans, right_ans);
} 

int Solution::solve(Tree* root) {
    mapa["+"] = [](int a, int b) -> int {
      return a + b;
    };
    mapa["-"] = [](int a, int b) -> int {
        return a - b;
    };
    mapa["*"] = [](int a, int b) -> int {
        return a * b;
    };
    mapa["/"] = [](int a, int b) -> int {
        return a / b;
    };
    // Write your code here
    return Calculate(root);
    //return mapa["+"](10, 2);
};
