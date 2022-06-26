        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            freopen ("adam.in","r",stdin);
            testcase
            {
                string x;cin>>x;
                int c=0;
                for(int i = 0 ; i < x.size() ;i++)
                {
                    if(x[i]=='D')break;
                    c++;
                }
                cout<<c<<"\n";
            };
        }