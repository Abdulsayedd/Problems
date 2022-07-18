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
    ll a , b , c ;
     cin>>a>>b>>c;
      ll num = abs(a-b)*2;
      ll xnum = num/2;
     if(a>num || c>num || b>num)
     {
         cout<<-1<<endl;
     }
     else
     {
         ll opposite = c+xnum ;
         if(opposite>num)
         {
             opposite = c-xnum;
         }
         cout<<opposite <<endl;

    }

}
}
