
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
        int n,k;
        cin>>n>>k;
        int x[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
        }
        int b;cin>>b;
        int anna=0;
        for(int i = 0 ; i < n ;i++)
        {
            if (i!=k)
            {
                anna+=x[i];
            }
        }
        int fair=anna/2;
        if (fair==b)
        {
            cout<<"Bon Appetit";
        }
        else
        {
            cout<<b-fair;
        }
    }