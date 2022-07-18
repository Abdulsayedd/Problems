    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n,m;cin>>n;
            m=n/3;
            string x;
            if(n%3==0)
            {
                while(m--)
                {
                    x+="21";
                }
            }
            else if(n%3==1)
            {
                x+="1";
                while(m--)
                {
                    x+="21";

                }
            }
            else
            {
                x+="2";
                while(m--)
                {
                    x+="12";
                }
            }
            cout<<x<<"\n";
        };
    }