        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            testcase
            {
                int n,m;cin>>n;m=n;
                if(n<10)cout<<n;
                else if(n>45)cout<<-1;
                else
                {
                    int sum=0,sum1=0;
                    vector<int>v;
                    for(int i = 9 ; i >=1;i--)
                        {
                            if(sum+i<=m)
                            {
                                v.push_back(i);
                                sum+=i;
                            }
                        }
                    sort(v.begin(),v.end());
                    for(auto i : v)cout<<i;
                }
                cout<<"\n";
            };
        }