#include<bits/stdc++.h>
using namespace std;
bool prime(int x)
{
    for(int i=2;i<=sqrt(x);++i)
    {
        if(x%i==0)return false;
    }
    return true;
}
int main(){
 int n,m,i;
 cin>>n>>m;
 for( i=n+1;i>n;++i)
 {
     bool ans=prime(i);
     if(ans==1)
     break;
 }
 if(m==i)cout<<"YES";
 else cout<<"NO";
return 0;
}