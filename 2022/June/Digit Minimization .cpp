        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            testcase
            {
                string x;cin>>x;
                if(x.size()==2)cout<<x[1]<<"\n";
                else
                {
                    int mn=10;
                    for(int i = 0 ; i < x.size() ;i++)
                    {
                        if(x[i]-'0'<mn)mn=x[i]-'0';
                    }
                    cout<<mn<<"\n";
                }
            };
        }