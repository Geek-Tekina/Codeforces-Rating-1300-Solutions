#include<bits/stdc++.h>
using namespace std;
int main(){
 int size;
 cin>>size;
 string stones;
 cin>>stones;
 int count =0;
 for(int i=0;i<=size-2;++i)
 {
     if(stones[i]==stones[i+1])count++;
 }
 cout<<count;
return 0;
}