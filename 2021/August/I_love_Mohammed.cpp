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
    int coun=0;
    arrayn;
    int maxx = x[0];
    int minn = x[0];
    for ( int i = 1 ; i < n ; i++)
    {
        if (x[i]>maxx)
        {
            maxx=x[i];
            coun++;
        }
        else if (x[i]<minn)
        {
            minn=x[i];
            coun++;
        }
    }
    cout<<coun;
}
