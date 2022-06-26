//=================سكيب ذيس=================
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
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
        #define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;
//=================سكيب ذيس=================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
//=================بسم الله=================
    int main (){
        bobo;
        ll n,k;
        cin>>n>>k;
        set<ll>v;
        for(int i = 0 ; i < n ; i++)
        {
            ll j;cin>>j;
            v.insert(j);
        }

        while(k--)
        {
            ll h;cin>>h;
            fnd(v,h);
            if(hh==1)
            {cout<<"found"<<endl;}
            else
            {
            cout<<"not found"<<endl;
            }
        }

    }
