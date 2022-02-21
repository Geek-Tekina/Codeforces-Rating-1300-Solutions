#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    cin>>v[i];
    int s,e;
    for(int i=0;i<n;++i)
    {
        if(v[i]==i+1)
        continue;
        else
        {
            s=i;
            for(int j=s+1;j<n;++j)
            {
                if(v[j]==i+2){
                e=j;
                break;}
            }
        }
    }
    cout<<s<<e;
}
int main(){
 solve();
return 0;
}