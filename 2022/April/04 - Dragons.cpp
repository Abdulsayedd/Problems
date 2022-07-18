#include <bits/stdc++.h>
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) emplace_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
        bobo;
        int k,n;
        cin>>k>>n;
        int f=0;
        vector<pair<int,int>>v;
        for ( int i = 0 ; i < n ; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        for ( int i = 0 ; i < n ; i++)
        {
            if (k>v[i].first)
            {
                k+=v[i].second;
            }
            else
            {
                f=1;
                break;
            }
        }
        f==1?cout<<"NO"<<endl:cout<<"YES"<<endl;



}
