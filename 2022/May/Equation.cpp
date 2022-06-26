    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int a,b,c;cin>>a>>b>>c;
        ll m=a*a,n=b*c;
        m+=n;
        cout<<m;
    }