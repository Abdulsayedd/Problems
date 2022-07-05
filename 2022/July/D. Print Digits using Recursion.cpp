//============================
// Name        : D. Print Digits using Recursion
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/D
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int fun (int n)
{
    if(n==0)return 0;
    fun(n/10);
    cout<<n%10<<" ";
}
int main () {
    pre;
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        if(n==0)cout<<0;
        else fun(n);
        cout<<"\n";
    }
}