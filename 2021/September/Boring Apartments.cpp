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
        testcase
        {
            int n;cin>>n;
            int coun=0,counl=0;
            int n10=n%10;
            while(n!=0)
            {
                counl++;
                n/=10;
            }
            coun+=(4*(n10-1))+(3*(n10-1))+(2*(n10-1))+(1*(n10-1));
            for(int i = 1 ; i <= counl;i++)
            {
                coun+=i;
            }

            cout<<coun<<endl;

        }
    }
