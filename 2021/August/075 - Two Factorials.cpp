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
    ll a,b,facta=1,factb=1;
    cin>>a>>b;
    for ( int i = 1 ; i<=a ;i++)
    {
        facta*=i;
    }
        for ( int i = 1 ; i<=b ;i++)
    {
        factb*=i;
    }
    cout<<(factb%10)+(facta%10)<<endl;


}
