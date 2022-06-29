#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool srt(const pair<string,string>&a,const pair<string,string>&b)
{return (a.first<b.first);}
int main ()
{
    pre;
    int n;cin>>n;
    map<string,vector<string>>mp;
    set<string>s;
    string final="SAD:(";
    for(int i = 0 ; i < n ; i++)
    {
        string x,y;cin>>x>>y;
        mp[x].push_back(y);
    }
    for (auto i : mp)
    {
        if(i.second.size()>4)
        {
            for(int j=0;j<i.second.size()-4;j++)
            {
                s.clear();
                for(int k = j ; k < j+5 ; k++)
                    s.insert(i.second[k]);
                if(s.size()>4)
                {
                    final = "PENTA KILL!";cout<<final;return 0;
                }
            }
        }
    }
    cout<<final;
}