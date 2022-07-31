// https://codeforces.com/group/fazmoAU2Rw/contest/101853/problem/I
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long double ans=0.5*c*c;
        cout<<fixed<<setprecision(6)<<ans<<"\n";
    }
}