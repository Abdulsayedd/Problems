#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
   unsigned long long f=1, n,ans=0;
    cin>>n;
    unsigned long long arr[n],x;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    do{
    for (int j=0;j<n;j++ )
    {
         if (arr[j]%2!=0)
        {
            f=0;
            break;
        }
    }
    if (f==1){
     ans++;
    for (int k=0;k<n;k++)
    {
        arr[k]=arr[k]/2;
    }
    }
    } while (f==1);

   cout<<ans;
}
