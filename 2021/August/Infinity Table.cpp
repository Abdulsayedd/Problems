    #include <bits/stdc++.h>
    #define super ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) push_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    bobo;
    testcase
    {
        ll n;cin>>n;
        ld ans = ceil((ld)sqrt(n));
        ll upp = sqrt(n);
        upp*=upp;
        if(n-upp==0)
        {
            cout<<ans<<" "<<1<<endl;
        }
        else if (n-upp<=ans)
        {
            cout<<n-upp<<" "<<ans<<endl;
        }
        else
        {
            cout<<ans<<" " <<(ans*ans)-n+1<<endl;
        }
    }

}

