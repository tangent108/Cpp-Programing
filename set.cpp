#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> s;

    s.insert('A');
    s.insert('D');
    s.insert('D');
    s.insert('C');
    s.insert('C');
    s.insert('B');

    cout << "The set contains:\n";
    set<char>::const_iterator p;

    for (p = s.begin(); p != s.end(); p++)
    {
        cout << *p << " ";
    }
    cout << "\nSet contains 'C' : ";
    if (s.find('C') != s.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << " No" << endl;
    }
    cout << "\nRemoving C.\n";
    s.erase('C');
    for (p = s.begin(); p != s.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Set contains 'C': ";
    if (s.find('C') == s.end())
    {
        cout << "No" << endl;
    }
    else
    {
        cout << " Yes" << endl;
    }
}