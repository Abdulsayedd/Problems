
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
        int n;cin>>n;
        vector<int>v;
        cout<<n<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            int h;cin>>h;
            v.pb(h);
        }
        sort(v.begin(),v.end());
        while(v.size()>1)
        {
            int h=v[0];
            for(int i = 0 ; i < v.size() ; i++)
            {
                v[i]-=h;
            }
            v.erase(std::remove(v.begin(), v.end(), 0),v.end());
            v.shrink_to_fit();
            cout<<v.size()<<endl;
        }

    }
