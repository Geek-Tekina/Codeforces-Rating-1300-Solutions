//My sol (wrong)
//Failing the case where two numbers are eqaul and are max amongst three
//    long long a,b,c,maxx=0;
//    cin>>a;
//    if(a>=maxx)maxx=a;
//    cin>>b;
//    if(b>=maxx)maxx=b;
//    cin>>c;
//    if(c>=maxx)maxx=c;
//    long long max=maxx;
//    if(a==b && b==c)
//    {
//        cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
//    } 
//    else {
//         if(max==a && max==b)
//        cout<<max-a<<" "<<max-b<<" "<<(max-c)+1<<endl;
//        else if(max==a && max==c)
//        cout<<max-a<<" "<<max-b+1<<" "<<(max-c)<<endl;
//        else if(max==b && max==c)
//        cout<<max-a+1<<" "<<max-b<<" "<<(max-c)<<endl;
//        else if(max==a)
//        cout<<max-a<<" "<<(max-b)+1<<" "<<(max-c)+1<<endl;
//        else if(max==b)
//        cout<<(max-a)+1<<" "<<max-b<<" "<<(max-c)+1<<endl;
//        else if(max==c)
//        cout<<(max-a)+1<<" "<<(max-b)+1<<" "<<"0"<<endl;
//Kamlesh sir 's solution
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t)
 {long long a,b,c;
    cin>>a>>b>>c;
    long long val1=max(b,c);
    long long val2=val1-a+1;
    if(val2<0)
        val2=0;
    long long val3=max(a,c);
    long long val4=val3-b+1;
    if(val4<0)
        val4=0;
    long long val5=max(a,b);
    long long val6=val5-c+1;
    if(val6<0)
        val6=0;
    cout<<val2<<" "<<val4<<" "<<val6<<endl;
    --t;
  
 }
return 0;
}