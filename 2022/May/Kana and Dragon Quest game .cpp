    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
int main ()
{
    testcase
    {
        int x, n, m;
        cin >> x >> n >> m;
        m*=10;
        if(m>=x){cout<<"YES"<<"\n";continue;}
        while(n--)
        {
            x=floor(x/2)+10;
        }
        x-=m;
        if(x<=0)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}