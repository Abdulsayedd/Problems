//=================سكيب ذيس=================
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
//=================سكيب ذيس=================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
//=================بسم الله=================
    int main (){
        bobo;
            int n,k;cin>>n>>k;
            int x[n];
            if(k>n)
            {
                k=k%n;
            }
            for(int i = 0 ; i < n ; i ++)
            {
                cin>>x[i];
            }
            for(int i = n-k ; i<n ; i++)//1 2 3 4 5 6 7 8 - > 6 7 8 1 2 3 4 5
            {
                cout<<x[i]<<" ";
            }
            for(int i = 0 ; i < n-k ; i++)
            {
                cout<<x[i]<<" ";
            }

    }
