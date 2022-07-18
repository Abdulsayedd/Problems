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
            ll p,a,b,c;cin>>p>>a>>b>>c;
            ll a1=a,b1=b,c1=c;
            a1-=p%a;
            b1-=p%b;
            c1-=p%c;
            if(a1>=a)a1%=a;
            if(b1>=b)b1%=b;
            if(c1>=c)c1%=c;
            cout<<min({a1,b1,c1})<<endl;
        };
    }