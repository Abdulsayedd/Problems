#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    int arr[n];
    int mn=INT_MAX,mx=0;
    for(int &i : arr)cin>>i,mx=max(mx,i),mn=min(mn,i);
    cout<<mx+mn<<"\n";
}