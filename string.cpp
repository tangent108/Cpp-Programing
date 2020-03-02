#include <bits/stdc++.h>

using namespace std;
class LL
{
    int data;
    LL *next;
    LL(){};
    LL(int data) : data(data), next(nullptr) {}
};

string longestCommonPrefix(vector<string> &strs)
{
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        //cout << prefix << endl;
        while (strs[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty())
            {
                return "";
            }
        }
    }
    return prefix;
}

int main()
{
    cout << max({1, 3, 5, 67, 89}) << endl;
    int m = INT_MAX;
    cout << m << endl;
    int mn = INT_MIN;
    // converting to string of int min
    cout << to_string(mn) << endl;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;

    char stringVar[] = "Hello";
    strcat(stringVar, " and Good-Bye.");
    //what will be the output
    cout << stringVar << endl;

    char X[15] = "Hi There!";
    cout << X << endl;
    // assign 'X' to these character
    int index = 0;
    while (X[index])
    {
        X[index] = 'X';
        index++;
    }
    cout << "\nAfter X assigned \n"
         << X << endl;

    // what is the problem (if any) with this code?
    char Y[20] = "How are You?";
    strcat(Y, "Good, I hope.");
    // char cc[9] = "Hi there How are You."; // error
    /*
    The string "Good, I hope." is too long for Y .A chunk of memory that does
    not belong to the array Y will be overwritten.
    */
    // char a[90], b[90];
    // cout << endl
    //      << "Enter some input:\n";
    // cin >> a >> b; //all whilespace character are skipped.
    // cout << "\n"
    //      << a << b << "End Of Output\n";
    /*
    so here is the solution to the problem
    cin.getline(C-string,integer(C-type string length including '\0'));
    
    */
    char c[9];
    cout << "\nEnter some input:\n";
    cin.getline(c, 90);
    cout << c << " End Of Output.\n";
    cout << strlen(c) << endl;
    /*
    Enter some input:
        The capital city of Japan is Tokyo.
        The capital city of Japan is Tokyo. End Of Output.
        35
    */

    /*
   the stream object cin has member function get(char c);
   when we use extraction operator ( >> ) it skip whitespace.

   but if we use get(char c) (like cin.get(c) ) function it reads all character whether
   the character is whitespace or not.  
   
   */
    char c1, c2, c3;
    // cin.get(c1);
    // cin.get(c2);
    // cin.get(c3);
    /*
    suppose input is like
    AB
    CD

    */

    // what will be output?
    // cout << c1 << " " << c2 << " " << c3 << endl;
    /*
   AB
    A B
   */
}