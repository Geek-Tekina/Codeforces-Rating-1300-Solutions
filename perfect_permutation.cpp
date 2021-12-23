#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
     if (n == 1 || n == 3)
        cout << -1;
    else if (n == 2)
        cout << 2 << " " << 1 << endl;
    else if (n%2==0)
    {
        vector<int>v;
        for(int i=1;i<=n;++i)
        {
           v.push_back(i);
        }
        for(int i=0;i<n;i=i+2)
        {
           swap(v[i],v[i+1]);
        }
        for(auto it : v)
        {
            cout<<it<<" ";
        }
    }
    else
        cout << -1;
    return 0;
}