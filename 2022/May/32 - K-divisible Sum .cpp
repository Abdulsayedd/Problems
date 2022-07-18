        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            testcase
            {
                int n,m;cin>>n>>m;
                int x=0;
                if(n==m||m==1){cout<<1<<endl;continue;}
                if(n==1){cout<<m<<endl;continue;}
                if(n>m)!(n%m)?cout<<1<<"\n":cout<<2<<"\n";
                else m--,cout<<(n+m)/n<<"\n";
            }
        }