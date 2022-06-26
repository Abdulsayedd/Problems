
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
    int main (){
        bobo;
            ll n;
            cin>>n;
            ll x[n];
            for(int i = 0 ; i < n-1 ; i++)
            {
                cin>>x[i];
            }
            sort(x,x+n-1);
            for(int i = 0 ; i < n-1 ; i++)
            {
                if(x[i]!=i+1)
                {
                    cout<<"The number of the missing bottle is "<<i+1;return 0;
                }
            }

    }
