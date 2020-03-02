/*
the header file for character manipulation 
is <cctype>
so include like 
#include<include>

*/
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char c1 = toupper('a');
    cout << c1 << endl;
    char c2 = tolower('B');
    cout << c2 << endl;
    if (isupper('S'))
    {
        cout << "\nYes, it is Upper case later" << endl;
    }
    else
    {
        cout << "\nNo, it is Not Upper case later" << endl;
    }
    if (islower('d'))
    {
        cout << "\nYes, it is lower case later" << endl;
    }
    else
    {
        cout << "\nNo, it is Not lower case later" << endl;
    }
    if (isalpha('S'))
    {
        cout << "\nYes, it is alpha case later" << endl;
    }
    else
    {
        cout << "\nNo, it is Not alpha case later" << endl;
    }
    if (isdigit('4'))
    {
        cout << "\nYes, It is digit" << endl;
    }
    else
    {
        cout << "\nNo it is not digit" << endl;
    }

    if (isalnum('4') && isalnum('a'))
    {
        cout << "\nBoth alphanumeric.";
    }
    else
    {
        cout << "\nOne or more are not." << endl;
    }
    /*

    1.isspace(' ') :output->true;
    2.ispunct('?') :output->true;
    3.isprint()
    4.isgraph()
    5.isctrl()
    
    */
    if (!isprint('%'))
    {
        cout << "\nNo it is not printing character." << endl;
    }

    return 0;
}