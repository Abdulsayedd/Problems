        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            testcase
            {
                vector<string>v;
                string x;cin>>x;
                bool f = true;
                bool f1 = false;
                string y="";
                for(int i = 0 ; i < x.size();i++)
                {
                    if(!isalpha(x[i]))f1=true;
                    y+=x[i];
                    if(x[i]<=90)
                    {
                        y.pop_back();
                        v.push_back(y);
                        y=x[i];
                    }
                    if( i==x.size()-1)
                    {
                        v.push_back(y);
                    }
                }
                for(int i = 1 ; i < v.size();i++)
                {
                    if(v[i][0]>90)f=false;
                }
                if(v[0][0]<=90)f=false;
                if(v.size()>7)f=false;
                if(f1)f=false;
                f?cout<<"YES"<<endl:cout<<"NO"<<endl;
            };
        }