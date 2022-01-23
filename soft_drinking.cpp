#include<bits/stdc++.h>
using namespace std;
int main(){
 int n, k, l, c, d, p, nl, np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 int drink = k*l;
 int t1 = drink/nl;
 int pieces = c*d;
 int t2 = pieces;
 int t3 = p/np;
 cout<<min(t1,min(t2,t3))/n;
return 0;
}