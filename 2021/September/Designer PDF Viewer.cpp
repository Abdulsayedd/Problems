
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
        vector<int>v;
        string s1="abcdefghijklmnopqrstuvwxyz";
        int x[26];
        for(int i = 0 ; i < 26 ; i++)
        {
            cin>>x[i];
        }
        string s;
        cin>>s;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            int m=s[i];
            v.pb(x[m-97]);
        }
        int maxx=*max_element(v.begin(),v.end());
        cout<<maxx*s.size();

    }
