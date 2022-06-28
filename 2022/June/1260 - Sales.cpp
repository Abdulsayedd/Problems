#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m,c=0;cin>>n;m=n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        for(int i = 1 ; i < n ; i++)
            for(int j = i-1 ; j>=0 ; j--)
                if(arr[j]<=arr[i])c++;
        cout<<c<<"\n";
    }
}