#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m, m2;
    m.insert({"Dev", 123});
    m.insert({"Denis", 4356});
    m.insert({"Jack", 7484});

    if (m.find("Jack") == m.end()) //if key not present ,it will return to an end iterator
    {
        cout << "\nThe keys is not present.";
    }
    else
    {
        cout << "\nThe key present.\n";
    }
    //printing all elements in map
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    // for erasing
    m.erase("Jack");
    cout << "\nAfter erasing." << endl;
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    m.insert({"Jack", 7484});
    cout << "\nThe size of map = " << m.size() << endl;
    if (m.empty())
    {
        cout << "\nThe map is empty ";
    }
    else
    {
        cout << "\nThe map is not empty\n";
    }
    // printing map using iterator
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    m2.insert({"Dev", 123});
    m2.insert({"Denis", 4356});
    m2.insert({"Jack", 7484});
    cout << endl;

    cout << (m == m2) << endl; // return true : output = 1;
}