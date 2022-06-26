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

short k,l,m,n;
int d,coun=0;
cin>>k>>l>>m>>n>>d;
for(int i=1 ; i <= d ; i++)
{
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0  )
        coun++;
}
cout<<coun<<endl;
}
