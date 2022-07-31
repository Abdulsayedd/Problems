#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long x,y;cin>>x>>y;
        cout<<max(x,y)-min(x,y)<<"\n";
    }
}