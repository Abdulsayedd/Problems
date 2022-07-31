//https://codeforces.com/group/xkS6MyTkfj/contest/262216/problem/F
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
        string x,y;cin>>x>>y;
        if(x.size()>y.size())swap(x,y);
        int l=0;
        string ans;
        for(int i = 0 ; i < y.size() ; i++)
        {
            if(x[l]==y[i])l++;
            if(l==x.size())break;
        }
        if(l==x.size())ans="YES";
        else ans="NO";
        cout<<ans<<"\n";
    }
}