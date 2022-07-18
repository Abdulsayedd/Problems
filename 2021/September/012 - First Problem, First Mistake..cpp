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
            string x;
            cin>>x;
            if ((x[0]>=65 && x[0]<=90) || (x[0]>=97 && x[0]<=122))
            {
                cout<<2;return 0;
            }
            else
            {
                ld n;
                n=stold(x);
                ll n1 =n;
                if (n-n1>0)
                {
                    cout<<1;return 0;
                }
                else
                {
                    cout<<0;return 0;
                }

            }


    }

