#include <bits/stdc++.h>

using namespace std;

int toInt(string s)
{
    stringstream ss(s);
    int n;
    ss >> n;
    return n;
}
double toDouble(string s)
{
    stringstream ss(s);
    double d;
    ss >> d;
    return d;
}

int main()
{
    string s1 = "34";
    string s3 = "24";
    string s2 = "23.654";

    int sum = toInt(s1) + toInt(s3);
    cout << sum << endl;
    cout << toDouble(s2) << endl;
}