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
#define mest(x,n) memset(x,n,sizeof x);
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
const int SIZ = 1000007;
int n,m,si,sj;
int c={};
vector<string>arr;
pair<int,int>p[4]={{1,0},{0,1},{0,-1},{-1,0}};
bool valid(int i,int j) {return i>=0&&j>=0&&i<n&&j<m;}
void b(int i, int j)
{
    if(!valid(i,j)|| arr[i][j]=='*' ||arr[i][j]=='#')return ;
    arr[i][j]='#';
    c++;
    for(auto pr : p)
    {
        int x=i+pr.first,y=j+pr.second;
        b(x,y);
    }
}
signed main (){
    pre;
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++)
    {
        string x;cin>>x;
        arr.push_back(x);
    }
    cin>>si>>sj;
    b(si-1,sj-1);
    cout<<c<<"\n";
}