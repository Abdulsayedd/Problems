#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    for(int i1=0;i1<t ;i1++)
    {
        cout<<"Case #"<<i1+1<<": ";
        int n,m,sum=0;cin>>n>>m;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<sum%m<<"\n";
    }
}