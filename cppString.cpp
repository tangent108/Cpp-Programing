#include <iostream>
#include <string>

using namespace std;

//uncomment one by one to get understand easily.

int main()
{
    // string s1, s2;
    // cout << "\nEnter string" << endl;
    // cin >> s1 >> s2;
    /*
    Lets input is like below:
            
        Enter string
        this is cpp string
    output:->    this  is
    
    */
    // cout << s1 << "  " << s2 << endl;
    /*
    So, Here is point why this is happen
    s1 read this and s2 read is
    Using the extraction Operator, >>,and cin,We can
    only read in words;we cannot read in aline or other string that contains a blank.
    */

    /*
   suppose if one wants to get whole line including whitespace character upto newline character(\n);
   then we can use this below function of required version
   
   The getline function for dtring objects has two versions:
   istream & getline(istream& ins, string & stringVariable, char delimiter);

   and 
   istream & getline(istream & ins, string & stringVariable);

   the first version of this function reads character from the istream
   object given as the first argument ( always cin in this chapter), inserting
   the character into the string variable stringVariable until an instance of the delimeter
   character is encounterd.The delimeter character is removed from the input and discarded.
   The second version uses '\n' for the default value of delimeter;otherwise,it works the same

   These getline function return their first argument(always cin in this chapter),but they are 
   usually used as if they were void function.

   */

    // string line;
    // cout << "Enter a line of input:\n";
    // getline(cin, line);
    // cout << line << "End Of Output\n";
    /*
    
    Enter a line of input:
    this is input string.
    this is input string.End Of Output
    */

    // string input;
    // cout << "\nEnter a string ." << endl;
    // getline(cin, input, '.');
    // cout << input << " End Of Output\n";
    /*
        
    Enter a string .
    This input string. And of type 2 ->as input
    This input string End Of Output -> as output
    */

    // string str("Mary");
    // cout << str[6] << endl;
    // cout << "\nThe at() finction\n";
    // cout << str.at(6) << endl;
    /*
    generates error below.

    The at() finction
    terminate called after throwing an instance of 'std::out_of_range'
    what():  basic_string::at: __n (which is 6) >= this->size() (which is 4)
    */

    /*
   
   Constructors
   1.string str; ->Default constructor;creates empty string object str.
   2.string str("string"); ->Creates a string object with data "string".
   3.string str(aString); ->Creates a string object str that is a copy of aString.
                            aString is an object of the class string.
   Element Access
   4.str[i]; ->Returns read/write reference to character in str at index i.
   5.str.at(i); -> Returns read/write reference to character in str at index i.
   6.str.substr(position,length); ->Returns the substing of the calling object string at position
                                    and having length character.
   Assignment/Modifiers
   7.str1 = str2; ->Allocates space and initializes it to str2's data, releases memory allocated
                    for str1, and sets str1's size to that of str2.
   8.str1 += str2; ->Character data of str2 is concatenated to the end of str1;
                        the size is set appropriately.
   9.str.empty() -> Return true if str is an empty string; return false otherwise.
   10. str1 + str2 ->Return a string that has str2's data concatenated to the end of str1's data.
                        The size is set appropirately.
   11.str.insert(pos, str2) ->Insert str2 into str begining at position pos.
   12.str.erase(pos,length) ->Removes substring of size lenght,starting at position pos.

   Comparisons
   13.str1 == str2 ->Compare for equality or inequality;return a Boolean value.
   14.str1 != str2 ->Compare for equality or inequality;return a Boolean value.
   15.str1 < str2 ->Compare Lexicographically.
   16.str1 > str2 ->Compare Lexicographically.
   17.str1 <= str2 ->Compare Lexicographically.
   18.str1 >= str2 ->Compare Lexicographically.
   19.str.find(str1) -> Returns index of the first occurance of str1 in str.
   20.str.find(str1, pos) ->Returns index of the first occurance of string str1 in str;
                            the search starts at position pos.
   21.str.find_first_of(str1, pos) ->Returns the index of the first instance in str of any characterin str1,
                                    starting the search at position pos.
   22.str.find_first_not_of(str1, pos) ->Returns the index of the first instance in str of any character
                                        not in str1,starting search at position pos.
   



   */
    string str3 = "this the good qiestion!,so:  what next? Hi,How are you?";
    //lets remove punctuation from string punctuation.
    for (int i = 0; i < str3.length(); i++)
    {
        if (ispunct(str3.at(i)))
        {
            str3.erase(i, 1);
        }
    }
    cout << str3 << endl;
}