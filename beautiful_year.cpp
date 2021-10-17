#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    y += 1;
    for (int i = 0; i > -1; ++i)
    {
        string s = to_string(y);
        set<char> st;
        for (auto it : s)
        {
            st.insert(it);
        }
        if (st.size() == 4)
        {
            cout << y;
            return 0;
        }
        else
            ++y;
    }
    return 0;
}