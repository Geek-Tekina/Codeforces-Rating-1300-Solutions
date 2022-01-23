#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b,c,d;
 set<int>st;
 cin>>a>>b>>c>>d;
 st.insert(a);
 st.insert(b);
 st.insert(c);
 st.insert(d);
 cout<<4-st.size();
return 0;
}