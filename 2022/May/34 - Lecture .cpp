    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
int main ()
{
    int n,m;cin>>n>>m;
    set<pair<string,string>>s;
    string x,y;
    while(m--)
    {
        cin>>x>>y;
        s.insert({x,y});
    }
    while(n--)
    {
        cin>>x;
        for(auto i : s)
        {
            if(i.first==x || i.second==x)
            {
                if(i.first.size()<=i.second.size())cout<<i.first<<" ";
                else cout<<i.second<<" ";
            }
        }
    }

}