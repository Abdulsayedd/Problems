//============================
// Name        : M. Make Cents?
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/gym/101350/problem/M
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    string x;double m;
    unordered_map<string,double>mp;
    while(t--)
    {
        int c,n;cin>>c>>n;
        for(int i = 0 ; i < c; i ++)
        {
            cin>>x>>m;
            mp[x]=m;
        }
        double sum=0.0;mp["JD"]=1.0;
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>m>>x;
            sum+=m*mp[x];
        }
        cout<<fixed<<setprecision(6)<<sum<<"\n";
        mp.clear();
    }
}