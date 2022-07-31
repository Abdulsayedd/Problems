//============================
// Name        : A. Balls in Urn
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/gym/101149/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;cin >> n;
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int h;cin>>h;
        mx=max(mx,h);
    }
    cout<<mx;
}