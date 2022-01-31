#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;++i)
 cin>>arr[i];
 int min = 100000;
 int p,q;
 for(int i=1;i<n;++i)
 {
   if(abs(arr[i]-arr[i-1])<min){min=abs(arr[i]-arr[i-1]);
   p=i+1;
   q=i-1+1;}
 }
   if(abs(arr[n-1]-arr[0])<min)
   {
       min=abs(arr[n-1]-arr[0]);
   p=n-1+1;
   q=1;
   }
 cout<<p<<" "<<q;
 
return 0;
}