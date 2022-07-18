    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n;cin>>n;
            int sum1=0,sum2=0;
            for(int i = 0 ;i<3 ;i++)
            {
                sum1+=n%10;
                n/=10;
            }
            for(int i = 0 ;i<3 ;i++)
            {
                sum2+=n%10;
                n/=10;
            }
            sum1==sum2?cout<<"YES"<<endl:cout<<"NO"<<endl;

        };
    }