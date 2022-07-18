    #include <bits/stdc++.h>
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) emplace_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
        bobo;
        testcase
        {

            int n;cin>>n;
            string str[n];
            for ( int i = 0 ; i < n ; i ++)
            {
                cin>>str[i];
            }
            vector<pair<int,int>>v;
            for ( int i = 0 ; i < n ; i++)
            {
                int x,y;
                cin>>x>>y;
                v.push_back({x,y});
            }
            for ( int i = 0 ; i < n ; i ++)
            {
                string x=str[i];
                for ( int j = 0 ; j < x.size() ; j++)
                {
                    if (x[j]=='U')
                    {
                        v[i].second++;
                    }
                    else if (x[j]=='D')
                    {
                        v[i].second--;
                    }
                    else if (x[j]=='R')
                    {
                        v[i].first++;
                    }
                    else if (x[j]=='L')
                    {
                        v[i].first--;
                    }
                }
            }
            sort(v.begin(),v.end());
            int coun=1;
            vector<int>vv;
            for ( int i = 0 ; i <v.size();i++)
            {
                if (v[i]==v[i+1])
                {
                    coun++;
                }
                else
                {
                    if (coun>1)
                    {
                    vv.push_back(coun);
                    }
                    coun=1;
                }
            }
            int sum = accumulate(vv.begin(),vv.end(),0);
            cout<<sum<<endl;
        }


}
