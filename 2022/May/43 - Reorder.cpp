    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n,k,h;cin>>n>>k;
            bool f = false;
            while(n--)
            {
                cin>>h;k-=h;
                if(k==0 && n==0){f=true;break;}
            }
            f?cout<<"YES"<<endl:cout<<"NO"<<endl;
        };
    }