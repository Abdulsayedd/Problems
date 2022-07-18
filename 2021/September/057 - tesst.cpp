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
        string x;cin>>x;
        int n=x.size();
        if (x[n-1]=='0' && x[n-2]=='0' && x[n-3]=='0')
        {
            cout<<"int "<<x[0]<<x[1]<<x[2];
        }
        else
        {
            cout<<"float "<<x[0]<<x[1]<<x[2]<<" "<<"0."<<x[n-3]<<x[n-2]<<x[n-1];
        }
    }
