#include<bits/stdc++.h>
using namespace std;
int main(){
 int size ,time;
 cin>>size>>time;
 string s;
 cin>>s;
 for(int i=0;i<time;++i)
 {
     for(int j=0;j<size-1;++j)
     {
       if(s[j]=='B'&& s[j+1]=='G')
       {swap(s[j],s[j+1]);++j;}
     }
 }
 cout<<s;
return 0;
}