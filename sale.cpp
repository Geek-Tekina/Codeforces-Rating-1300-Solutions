#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 int arr[n];
 for(int i=0;i<n;++i)
 cin>>arr[i];
 sort(arr,arr+n);
 int i=0,sum=0;
 while(m-- &&arr[i]<0)
 {
     sum=sum+arr[i++];
     
 }
 cout<<-1*sum;
return 0;
}