// https://codeforces.com/contest/710/problem/A
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    string x;cin>>x;
    int ans=8;
    if(x[0]=='a' || x[0]=='h')
    {
        (x[1]-'0'>1 &&x[1]-'0'<8)?ans=5:ans=3;
    }
    else
    {
        if(x[1]=='1' || x[1]=='8')ans=5;
    }
    cout<<ans<<"\n";
}