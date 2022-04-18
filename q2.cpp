#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x, y;
        string s;
        cin >> x >> y;
        cin >> s;
        int streak = 0;
        int sum = 0;
        int local_streak = 0;
        for (auto ch : s)
        {
            if (ch == '1')
            {
                sum = sum + x;
                ++local_streak;
            }
            else if (ch == '0')
            {if(local_streak>streak)
                streak = local_streak;
                local_streak = 0;
            }
        }
        if(local_streak>streak)
        streak=local_streak;
        sum += streak * y;
        cout << sum << endl;
    }
    return 0;
}