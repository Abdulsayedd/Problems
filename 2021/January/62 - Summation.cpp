#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
    long long  n,ans=0;
    cin>>n;
    long long arr[n],x;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        ans+=arr[j];
    }
   cout<<abs(ans);

}

