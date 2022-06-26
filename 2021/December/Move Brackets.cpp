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
            string x;cin>>x;
            ll counl=0,counr=0;
            ll coun=0;
            for (int i = 0 ; i < x.size() ; i++)
            {
                if (x[i]=='(')
                {
                    counl++;
                    coun++;
                }
                else if(x[i]==')' &&counl>0)
                {
                    counl--;
                    coun++;
                }
                else if (x[i]==')' && counl==0)
                {
                    continue;
                }
            }
            cout<<coun-counl;
    }
