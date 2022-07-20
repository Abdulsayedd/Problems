// https://codeforces.com/problemset/problem/1392/A
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n;m=n;
        set<int>s;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>m;
            s.insert(m);
        }
        cout<<((s.size()>1)?1:n)<<"\n";
    }
}