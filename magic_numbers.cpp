#include<bits/stdc++.h>
using namespace std;
int check(string s )
{
    for(int i=0;i<s.length();)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i+=3;
        }
        else if(s[i]=='1'&&s[i+1]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1')
        {
            ++i;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
}
int main(){
 string s ;
 cin>>s;
 check(s);
return 0;
}