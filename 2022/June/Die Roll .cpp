#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m;cin>>n>>m;
    string arr[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    cout<<arr[6-max(m,n)];
}