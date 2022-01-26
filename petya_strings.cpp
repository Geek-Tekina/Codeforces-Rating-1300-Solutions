#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
int cnt=0; 
for(int i=0;i<a.length();++i)
{
    if(tolower(a[i])<tolower(b[i]))
    {cout<<-1;break;}
    else if(tolower(a[i])>tolower(b[i]))
    {cout<<1;break;}
    else cnt++;
}
if(cnt==a.length())cout<<0;

return 0;
}