#include <bits/stdc++.h>

using namespace std;

int main()
{
    char charArray[5];
    char c;
    int i = 0;
    cout << "\nEnter some symbols.";
    do
    {
        cin.get(c);
        charArray[i++] = c;

    } while (c != '\n');

    cout << charArray << endl;
}