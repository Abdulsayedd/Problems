#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
       unsigned long long f=0, n;
        cin>>n;
        unsigned long long arr[n],x;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<=n/2 && n!=0;j++)
        {
            if (arr[j]!=arr[n-j-1])
            {
                f=1;
                break;
            }
        }
       if (f==0)
       {
           cout<<"YES";
       }
       else if (f==1)
       {
           cout<<"NO";
       }

    }
