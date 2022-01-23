#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() <= 10)
        {
            cout << s<<endl;;
        }
        else
           { int n = s.size();
        cout << s[0] << n - 2 << s[n-1]<<endl;}
    }
    return 0;
}