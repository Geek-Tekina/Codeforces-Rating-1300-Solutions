#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr1[n];
 int arr2[n];
 int l_z=0,l_o=0,r_z=0,r_o=0;
 for(int i=0;i<n;++i)
 { cin>>arr1[i];
   cin>>arr2[i];
   if(arr1[i]==0)l_z++;
   else l_o++;
   if(arr2[i]==1)r_z++;
   else r_o++;
 }
 int cnt=0;
 if(l_o>l_z)cnt+=l_z;
 else cnt+=l_o;
 if(r_o>r_z)cnt+=r_z;
 else cnt+=r_o;
 cout<<cnt;
return 0;
}