#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        for(int i=0;i<x.size();i++)x[i]|=' ';
        cout<<(x=="yes"?"YES":"NO")<<"\n";
    }
}