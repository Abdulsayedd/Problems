    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        testcase
        {
            ll a,b;cin>>a>>b;
            ll x=sqrt(a*a+b*b);
            if(a==0 && b==0)cout<<0<<endl;
            else if(pow(x,2)==a*a+b*b)cout<<1<<endl;
            else cout<<2<<endl;
        };
    }