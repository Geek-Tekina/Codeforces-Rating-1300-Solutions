#include<bits/stdc++.h>
using namespace std;
int main(){
 int f , b ;
 cin>>f;
 int a[f];
 for(int i=0;i<f;++i)
 cin>>a[i];
 cin>>b;
 int bb[b];
 for(int i=0;i<b;++i)
 cin>>bb[i];
 int max_r = 0;
 int number =0;
 vector<int>r;
 for(auto it :a){
     for(auto it2 :bb)
     {   int rr = it2/it;
         if(rr*it==it2)
         r.push_back(rr);
     }
 }
 int max = *max_element(r.begin(),r.end());
//  cout<<max<<endl;
 cout<<count(r.begin(),r.end(),max);

return 0;
}