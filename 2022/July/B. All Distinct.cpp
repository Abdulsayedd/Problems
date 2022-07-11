// Problem     : B. All Distinct , https://codeforces.com/contest/1692/problem/B
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,h;cin>>n;
        set<int>s;
        for(int i  = 0 ; i < n ; i++)
        {
            cin>>h;
            s.insert(h);
        }
        cout<<s.size()-(n-s.size())%2<<"\n";
    }

}

