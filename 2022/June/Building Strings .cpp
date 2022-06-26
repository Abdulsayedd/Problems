        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            testcase
            {
                int n,m;cin>>n>>m;
                string x;cin>>x;
                string y;cin>>y;
                string z;cin>>z;
                map<char,int>mp;
                for(char m = 'a'; m<='z';m++)
                {
                    mp[m]=-1;
                }
                int c=0;
                for(int i = 0 ; i < x.size() ; i++)
                {
                    if(mp[x[i]]==-1)
                    {
                        mp[x[i]]=y[i]-'0';
                    }
                    else if(mp[x[i]]>y[i]-'0')mp[x[i]]=y[i]-'0';
                }
                for(int i = 0 ; i < z.size() ;i++)
                {
                    if(mp[z[i]]==-1){c=-1;break;}
                    c+=mp[z[i]];
                }
                cout<<c<<"\n";
            };
        }