    #include <bits/stdc++.h>
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) emplace_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
 bobo;
 int a,b,coun=0,ans=0;
 cin>>a>>b;
 if (a==b)
 {
     cout<<a<<endl;
 }
 else if(a<b)
 {
     cout<<"-1"<<endl;
 }
 else
 {
     if(a%2==0)
     {
         ans=a/2;
     }
     else
     {
         ans=(a/2)+1;
     }
     coun=ans%b;
     if (coun==0)
     {
         cout<<ans<<endl;
     }
     else
     {
         cout<<ans+b-coun<<endl;
     }
 }

}
