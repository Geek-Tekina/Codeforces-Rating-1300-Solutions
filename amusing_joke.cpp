#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    int x;
    if (s.length() < c.length())
        x = c.length();
    else
        x = s.length();
    for (int i = 0; i < x; ++i)
    {
        if (s[i] != c[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}