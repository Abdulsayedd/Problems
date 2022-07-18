        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            long long n,m,mid=0;cin>>n>>m;
            n%2==0?mid=(n/2):mid=(n/2)+1;
            if(m<=mid)cout<<m*2-1;
            else cout<<(m-mid)*2;

        }