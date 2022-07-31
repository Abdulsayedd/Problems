//https://codeforces.com/group/xkS6MyTkfj/contest/262216/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int mn=INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            int p,v;cin>>p>>v;
            mn=min(p-v,mn);
        }
        cout<<mn<<"\n";
    }
}