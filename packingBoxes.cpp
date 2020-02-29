/*

Given an array of integers, pack consecutive elements into sublists.

For example, given the list [4, 4, 1, 6, 6, 6, 1, 1, 1, 1], return [[4, 4], [1], [6, 6, 6], [1, 1, 1, 1]].

Note: If there's only one occurrence in the list it should still be in its own sublist.

Example 1
Input

nums = [4, 4, 1, 6, 6, 6, 1, 1, 1, 1]
Output

[[4, 4],
[1],
[6, 6, 6],
[1, 1, 1, 1]]
Example 2
Input

nums = [5, 5, 5, 5, 5, 5, 5, 5]
Output

[[5, 5, 5, 5, 5, 5, 5, 5]]
Example 3
Input

nums = [1]
Output

[[1]]

*/

vector<vector<int>> solve(vector<int>& nums) {
    // Write your code here
    
    vector<vector<int>> vv;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            vector<int> v1;
            int ele = nums[i];
            v1.push_back(ele);
            while(nums[i+1]==ele){
                v1.push_back(nums[i+1]);
                i++;
                
            }
            vv.push_back(v1);
        }
        else{
            vector<int> v2;
            v2.push_back(nums[i]);
            vv.push_back(v2);
        }
       
    }
    return vv;
    
};
