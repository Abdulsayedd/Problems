#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    int arr[n];
    for(int &i : arr)cin>>i;
    int mx=INT_MIN;
    int mxsize=min(m-1,n);
    for(int i = 0 ; i < mxsize ; i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}

