#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
bool chk(vector<int>mx,int d,int m)
{
    return (mx[2]==-1)||(d<mx[0])||(d==mx[0] && mx[1]<m);
}
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int q,x,y;cin>>q>>x>>y;
        int i=1;
        vector<int>mx={x,y,-1};
        while(i<=q)
        {
            int d,m;cin>>d>>m;
            if(d<=x && m>=y)
            {
                if(chk(mx,d,m))mx={d,m,i};
            }
            i++;
        }
        cout<<mx[2]<<"\n";
    }
}