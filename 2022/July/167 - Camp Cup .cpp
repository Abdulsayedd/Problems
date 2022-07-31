// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/D
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
        map<string,long long>mp;
        vector<pair<long long,string>>v;
        int t;cin>>t;
        while(t--)
        {
            int n,m;cin>>n;m=n;
            double prize=1000.0;
            for(int i =0 ; i< n;i++)
            {
                string x;cin>>x;
                mp[x]+=prize;
                prize=round(prize*(90.0/100));
            }
        }
        for(auto i : mp)v.push_back({(i.second*-1),i.first});
        sort(v.begin(),v.end());
        cout<<v[0].second<<"\n";
        for(auto i : v)cout<<i.second<<" "<<i.first*-1<<"\n";


}