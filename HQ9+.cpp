#include<bits/stdc++.h>
using namespace std;
int main(){
 string s ;
 cin>>s;
 bool temp = true;
 for(auto it : s)
 {
     if(it=='H' || it =='Q' || it=='9')
     {
         temp = false;
     }
 }
     if(temp)
     cout<<"NO";
     else 
     cout<<"YES";
return 0;
}