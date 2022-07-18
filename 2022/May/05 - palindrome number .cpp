    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        string x;cin>>x;
        string y = x;
        reverse(x.begin(),x.end());
        y==x?cout<<"YES":cout<<"NO";
    }