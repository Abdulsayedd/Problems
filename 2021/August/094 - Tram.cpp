    #include <bits/stdc++.h>
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) emplace_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
using namespace std ;
int main (){
    bobo;
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        vector<int>vv(n);
        for ( int i = 0 ; i < n ; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int coun=0;
        for ( int i = 0 ; i < n ; i ++)
        {
            coun-=v[i].first;
            coun+=v[i].second;
            vv.pb(coun);
        }
        cout<<*max_element(vv.begin(),vv.end());

    }

