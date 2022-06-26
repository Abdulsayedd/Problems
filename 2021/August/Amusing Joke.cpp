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
    string x,y,z,mm;
    cin>>x;cin>>y;cin>>z;
    for ( int i = 0 ; i < x.size() ;i++)
    {
        mm+=x[i];
    }
        for ( int i = 0 ; i < y.size() ;i++)
    {
        mm+=y[i];
    }
    sort(mm.begin(),mm.end());
    sort(z.begin(),z.end());
    mm==z?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
