
 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
//===================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
    int main (){
        bobo;
        map<int,int>mapa;
        testcase{
        int n;
        cin>>n;
        mapa[n]++;
        }
        auto itr = mapa.begin();
        int maxn=0;
        for(auto it = mapa.begin();it!=mapa.end();it++)
        {
            maxn=max(maxn,it->second);
        }
        vector<int>v;
        for(auto it = mapa.begin();it!=mapa.end();it++)
        {
            if (it->second==maxn)
            {
                v.pb(it->first);
            }
        }
        cout<<v[0];


    }
