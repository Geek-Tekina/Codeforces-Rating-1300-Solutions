#include<bits/stdc++.h>
using namespace std;
bool check(map<char,int>mp,int k)
{
    for(auto i : mp)
    {
        if(i.second%k!=0)
        {
            return false;
        }
    }
    return true;
}
int main(){
 int k;
 cin>>k;
 string s ;
 cin>>s;
 map<char,int>mp;
 for(auto it :s)
 mp[it]++;
 if(!check(mp,k))
  cout<<"-1";
 else
 {
   string word ;
   for(auto it : mp)
   {
       while(it.second/k)
       {
           word+=it.first;
           it.second-=k;
       }
   }
   while(k--)
   {
       cout<<word;
   }
 } 
return 0;
}