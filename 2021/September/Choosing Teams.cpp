        #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn long long n;cin>>n;long long x[n]; for ( long long i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
    int main (){
     bobo;
        int n,a;
        cin>>n>>a;
        int x[n];
        int coun=0,couns=0;
        for ( int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
        }
        for ( int i = 0 ; i < n ; i++)
        {
            if (x[i]+a<=5)
            {
                coun++;
            }
        }
        cout<<coun/3;
        }

