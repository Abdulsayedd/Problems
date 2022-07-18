    #include <bits/stdc++.h>
    #include<windows.h>
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
        map<string,int>v;
        for ( int i  = 0 ; i < 5 ; i++)
        {
            string x;int y;cin>>x>>y;
            v.insert({x,y});
        }
        for (auto it = v.begin() ; it !=v.end() ; it++)
        {
            cout<<it->first<< " " << it->second << endl;
        }
}
