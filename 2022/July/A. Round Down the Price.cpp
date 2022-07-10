//============================
// Name        : A. Round Down the Price
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/contest/1702/problem/A
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
        string x;cin>>x;
        x[0]--;
        long long mh = stoll(x);
        cout<<mh<<"\n";
    }
}
