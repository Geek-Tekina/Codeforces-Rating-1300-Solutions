#include<bits/stdc++.h>
using namespace std;
int main(){
 int n , f, b;
 cin>>n>>f>>b;
 int cnt =0 ;
 int forw,backw;
 int i=1;
 while(i<=n)
 {
     forw=i-1;
     backw=n-i;
     if(forw>=f && backw<=b)
     cnt++;
     ++i;
 }
 cout<<cnt;
return 0;
}