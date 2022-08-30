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
const int MOD = 1000000007;
string path="IEHOVA#";
string arr[10];
vector<string>ans;
void trav(int i,int j,int let)
{
    if(arr[i][j]=='#')return ;
    if(arr[i][j+1]==path[let])
    {
        ans.push_back("right");
        trav(i,j+1,let+1);
    }
    else if(arr[i-1][j]==path[let])
    {
        ans.push_back("forth");
        trav(i-1,j,let+1);
    }
    else if(arr[i][j-1]==path[let])
    {
        ans.push_back("left");
        trav(i,j-1,let+1);
    }
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
            int n,m;cin>>n>>m;
            int pos1,pos2;
            for(int i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
                for(int j =0; j <arr[i].size() ; j++)
                {
                    if(arr[i][j]=='@')
                        pos1=i,pos2=j;
                }
            }
            trav(pos1,pos2,0);
            for(int i = 0 ; i < ans.size()-1 ; i++)cout<<ans[i]<<" ";
            cout<<ans[ans.size()-1];
            cout<<"\n";
            ans.clear();
    }
}