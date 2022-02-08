#include<bits/stdc++.h>
using namespace std;
int main(){
 int t ;
 cin>>t;
 map<string,int> mp;
 for(int i=0;i<t;++i)
 {
   string s ;
   cin>>s;
   mp[s]++;
 }
 string max =" ";
 int m=0;
 for(auto it : mp)
 {
    if(it.second>m)
    {m=it.second;
     max=it.first;} 
 }
 cout<<max;

return 0;
}