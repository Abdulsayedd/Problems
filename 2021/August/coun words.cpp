    #include <bits/stdc++.h>
    #define super ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
        list<int>v{2,4,6,6,12,6,67,1,31,6,6,1,2};
        list<int>v2{1,1,1,1,1,1,1,1,1};
        v2.sort();
        v.sort();
        v.unique();
        v.merge(v2);
        for ( auto it=v.begin() ; it!=v.end();it++)
        {
            cout<<*it<<" ";
        }

}
