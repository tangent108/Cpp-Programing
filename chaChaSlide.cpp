/*

Cha Cha Slide
Given two strings s1 and s2, determine if one is a rotation of the other.

Example 1
Input

s1 = "Cattywampus"
s2 = "sCattywampu"
Output

true
Example 2
Input

s1 = "Gardyloo"
s2 = "dylooGar"
Output

true
Explanation

This string is rotated on Gar and dyloo

Example 3
Input

s1 = "Taradiddle"
s2 = "diddleTara"
Output

true
Example 4
Input

s1 = "Snickersnee"
s2 = "Snickersnee"
Output

true
Explanation

This one is tricky but it's still a rotation, between `` and Snickersnee

*/



bool Solution::solve(std::string s1, std::string s2) {
    // Write your code here
    for(int i=0;i<s1.size();i++){
        string s3=s1.substr(i,s1.size())+s1.substr(0,i);
        if(s2==s3){
            return true;
            break;
        }
    }
    return false;
};
