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
        int n,coun=1;cin>>n;
        int x[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(abs(x[i]-x[j])<=1)
                {
                    coun++;
                }
            }
            v.pb(coun);
            coun=1;
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1];
    }
