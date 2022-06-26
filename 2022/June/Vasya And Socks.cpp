        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            int n,m,c=0;cin>>n>>m;
            for(int i = 1 ; i <= n ; i++)if(++c%m==0)i--;
            cout<<c<<"\n";
        }