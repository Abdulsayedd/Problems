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
int n;
bool valid(int i,int j){return i>=0&&j>=0&&i<n&&j<n;}
int vis[40][40];
string grid[40];
int dx[]={0,0,1,-1,1,-1,1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
void dfs(int i,int j)
{
        if(!valid(i,j) || vis[i][j] || grid[i][j]=='0')return ;
        vis[i][j]=1;
        for(int k = 0 ; k < 8 ; k++)
        {
            int gx=dx[k]+i;
            int gy=dy[k]+j;
            dfs(gx,gy);
        }
}
signed main (){
    pre;
        int t=1;
        while(cin>>n)
        {
            int c = 0;
            for (int i = 0; i < n; i++) {
                cin>>grid[i];
            }
            memset(vis, 0, sizeof vis);
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (grid[i][j]=='1' && !vis[i][j]) {
                        dfs(i, j);
                        c++;
                    }
                }
            }
            cout << "Image number " << t++ << " contains " << c << " war eagles." << "\n";
        }
}