//============================
// Name        : A. Lunch Rush
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/problemset/problem/276/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    int mx=INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        int h1,h2;cin>>h1>>h2;
        if(h2>m)mx=max(mx,h1-(h2-m));
        else mx=max(mx,h1);
    }
    cout<<mx;

}