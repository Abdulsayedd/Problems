    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n,m;cin>>n;
            m=n;
            while(m)
            {
                for (int i = n-m ; i>0;i--)
                {
                    cout<<"()";
                }
                for (int i = m ; i >0;i--)
                {
                    cout<<"(";
                }
                for (int i = m ; i >0;i--)
                {
                    cout<<")";
                }
                m--;
                cout<<endl;
            }
        };
    }