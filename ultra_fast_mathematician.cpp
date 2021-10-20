#include<bits/stdc++.h>
using namespace std;
int main(){
 string s1,s2;
 cin>>s1>>s2;
 int length = s1.length();
 int arr[100] ,brr[100],c[100];
 for(int i=0;i<length;++i)
 {
     arr[i]=s1[i];
     brr[i]=s2[i];
     c[i]=arr[i]^brr[i];
     cout<<c[i];
 }
return 0;
}