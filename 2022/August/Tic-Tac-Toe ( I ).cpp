#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << "\n";
const double PI = 3.14159265358979323846;
bool chk(string x)
{
   return     ((x[0] != '.' && x[0] == x[4] && x[4] == x[8]) ||
              (x[2] != '.' && x[2] == x[4] && x[4] == x[6])) ||
              ((x[0] != '.' && x[0] == x[1] && x[1] == x[2]) ||
              (x[3] != '.' && x[3] == x[4] && x[4] == x[5])  ||
              (x[6] != '.' && x[6] == x[7] && x[7] == x[8])) ||
              ((x[0] != '.' && x[0] == x[3] && x[3] == x[6]) ||
              (x[1] != '.' && x[1] == x[4] && x[4] == x[7])  ||
              (x[2] != '.' && x[2] == x[5] && x[5] == x[8]));
}
bool bfs(string x,string bord)
{
    queue<pair<string,bool>>q;
    q.push({x,1});
    while(!q.empty())
    {
        pair<string,bool>p={q.front().first,q.front().second};
        if(p.first==bord)return true;
        q.pop();
        if(chk(p.first))continue;
        for(int i = 0 ; i < 9 ; i++)
        {
            if(p.first[i]=='.')
            {
                if(p.second)p.first[i]='X';
                else p.first[i]='O';
                if(p.first[i]==bord[i])q.push({p.first,!p.second});
                p.first[i]='.';
            }
        }
    }
    return false;
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        string bord="",strt=".........";
        for(int i = 0 ; i < 3 ; i++)
        {
            string x;cin>>x;
            bord+=x;
        }
        cout<<(bfs(strt,bord)?"yes":"no")<<"\n";
    }
}