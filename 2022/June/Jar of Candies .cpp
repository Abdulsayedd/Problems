#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m;cin>>n>>m;
    int arr[m];
    for(int &i:arr)cin>>i,cout<<n-i<<"\n",n=i;
}