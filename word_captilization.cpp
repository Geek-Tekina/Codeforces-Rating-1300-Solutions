#include<bits/stdc++.h>
using namespace std;
void cptialize(string s)
{
  s[0]=toupper(s[0]);
  cout<<s;
}
int main(){
 string word;
 cin>>word;
 cptialize(word);
return 0;
}