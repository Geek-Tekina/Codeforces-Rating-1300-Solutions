#include<bits/stdc++.h>
using namespace std;
int main(){
 string num;
 
 cin>>num;
 for(int i=0;i<=num.length()-1;++i)
 {
   if(num[i]=='.')
   {
       cout<<0;
       continue;
   }
   else if(num[i]=='-' && num[i+1]=='.')
   {
       cout<<1;
       i++;
   }
   else if(num[i]=='-' && num[i+1]=='-')
   {
       cout<<2;
       i++;
   }
 }
return 0;
}