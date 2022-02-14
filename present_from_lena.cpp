// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  for(int i =0;i<=n;++i)
//   {   int k=0;
//       for(int j=0;j<=n;++j)
//       {
//           if(i+j>=n){
//               if(i==0)
//               cout<<k++;
//               else
//           cout<<k++<<" ";}      //This for spaces and left upper side
//           else cout<<"  ";
//       }
//       k=k-2;                           // This for upper right side
//       while(k>-1 )
//      {   if(k==0)
//          cout<<k;
//          else
//          cout<<k<<" ";
//      --k;}
//       cout<<endl;
//   }
//   for(int i=0;i<=n;++i)           //down side
//   {   int k =0;
//       for(int j=0;j<=n;++j)
//       {
//          if(j>i){
//          if(j==n && i==n) 
//          cout<<k++;
//          else   
//          cout<<k++<<" ";}
//          else cout<<"  "; 
//       }
//       k=k-2;
//       while(k>-1)
//       {if(k==0)
//          cout<<k;
//          else
//       cout<<k<<" ";
//       --k;}
//       if(i!=n)
//       cout<<endl;
//   }
// return 0;
// }
#include<iostream>

using namespace std;

int main()
{
     int i, j, k, l, n;
     cin >> n;
     for(i=0;i<=n;i++)
        {
            for(j=i;j<n;j++)
                cout<<"  ";
            for(k=0;k<=i;k++){
                    cout << k;
                    if(i!=0)
                        cout << " ";
                 }
             for(k=i-1;k>=0;k--){
                cout<<k;
                 if(k>0)
                    cout<<" ";
            }
            cout<<"\n";
         }
      for(i=n-1;i>=0;i--)
      {
        for(j=n-1;j>=i;j--)
          cout<<"  ";
        for(k=0;k<=i;k++){
                cout << k;
                if(i!=0)
                    cout << " ";
             }
         for(k=i-1;k>=0;k--){
            cout<<k;
             if(k>0)
                cout<<" ";
        }
        cout<<"\n";
      }
     return 0;
}