#include<bits/stdc++.h>
using namespace std;
int main(){
 string word;
 cin>>word;
 int i;
 int lower =0,upper =0;
 for( i=0;i<word.size();++i)
 {
     if(islower(word[i]))lower++;
     else upper++;
 }
 if(lower>upper)
 {
     for(i=0;i<word.size();++i)
     word[i]=tolower(word[i]);
 }
 else if(upper>lower)
 {
     for(i=0;i<word.size();++i)
     word[i]=toupper(word[i]);
 }
 else if(upper==lower)
 {
     for(i=0;i<word.size();++i)
     word[i]=tolower(word[i]);
 }
 cout<<word;
return 0;
}