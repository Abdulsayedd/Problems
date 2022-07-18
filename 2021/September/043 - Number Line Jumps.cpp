
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
            ull x1,v1,x2,v2;
            cin>>x1>>v1>>x2>>v2;
            for (int i = 0 ; i < 2e9 ; i++)
            {
                if (x1==x2)
                {
                    cout<<"YES"<<endl;return 0;
                }
                else
                {
                    x1+=v1;
                    x2+=v2;
                }
            }
            cout<<"NO"<<endl;return 0;

    }
