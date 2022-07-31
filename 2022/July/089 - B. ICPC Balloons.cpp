#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string x;cin>>x;
        set<char>s;
        for(int i = 0 ; i <x.size(); i++)s.insert(x[i]);
        cout<<n+s.size()<<"\n";
    }
}