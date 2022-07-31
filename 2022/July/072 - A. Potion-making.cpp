//============================
// Name        : A. Potion-making
// Author      : Abdulsayed
// Version     : 2022
// Description : GCD
// Link        : https://codeforces.com/problemset/problem/1525/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long arr[1000005];
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<100/__gcd(n,100)<<"\n";
    }
}
