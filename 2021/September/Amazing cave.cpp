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
        ll n;cin>>n;
        if (n%2==0)
        {
            if (n%10==7 || n%10==4)
            {
                cout<<"lucky even";
                return 0;
            }
            else
            {
                cout<<"unlucky even";
                return 0;
            }
        }
        else
        {
            if (n%10==7 || n%10==4)
            {
                cout<<"lucky odd";
                return 0;
            }
            else
            {
                cout<<"unlucky odd";
                return 0;
            }
        }
        }

