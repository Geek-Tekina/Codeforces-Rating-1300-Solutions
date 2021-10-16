//My Code
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int arr[5][5];int i,j;
//  int row=0,col=0;
//  for( i=1;i<=5;++i)
//  {
//      for( j=1;j<=5;++j)
//      {
//          cin>>arr[i][j];
//      }
//  }
// for(i=1;i<=5;++i)
// {if(row!=0)break;
//     for(j=1;j<=5;++j)
//     {
//         if(arr[i][j]^1==0)
//         {
//             row=i;
//             col=j;
//             break;
//         }
//     }
    
// }
// int ans = abs(3-row)+abs(3-col);
// cout<<ans<<endl;
// return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}