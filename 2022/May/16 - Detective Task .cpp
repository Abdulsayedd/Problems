    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        testcase
        {
            string x;cin>>x;
            if(x.size()==1)cout<<1<<endl;
            else
            {
                int q=0,zeroind=-1,oneind=-1;
                for(int i = 0 ; i < x.size() ;i++)
                {
                    if(x[i]=='?')q++;
                    if(x[i]=='0' && zeroind == -1)zeroind=i;
                    if(x[i]=='1')oneind=i;

                }
                if(q==x.size())cout<<q<<endl;
                else
                {
                    if(oneind==-1)cout<<zeroind+1<<endl;
                    else if(zeroind==-1)cout<<x.size()-oneind<<endl;
                    else cout<<zeroind-oneind+1<<endl;
                }
            }
        };
    }