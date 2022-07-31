//============================
// Name        : B. Unusual Team
// Author      : Abdulsayed
// Version     : 2022
// Description : Bitwise
// Link        : https://codeforces.com/gym/101350/problem/B
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string ans = "WeWillEatYou";
        int n,m;cin>>n>>m;
        (m>n)?ans:ans="FunkyMonkeys";
        cout<<ans<<"\n";
    }
}