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
const int SIZ = 1007;
int arr[SIZ][SIZ];
vector<int>ans;
void loop(int i,int j,int n)
{
    if (i>=n || j>=n)return;
    for (int it = j; it < n; it++)ans.push_back(arr[i][it]);
    for (int it = i + 1; it < n; it++)ans.push_back(arr[it][n-1]);
    if ((n - 1) != i)for (int it=n-2;it>=j;it--)ans.push_back(arr[n-1][it]);
    if ((n - 1)!=j)for (int it=n-2;it>i;it--)ans.push_back(arr[it][j]);
    loop(i+1,j+1,n-1);
}
signed main (){
    pre;
    int n;cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    loop(0,0,n);
    for(int i = 0 ; i < ans.size() ; i++)
    {
        if(i%n==0&&i)cout<<"\n";
        cout<<ans[i]<<" ";
    }
}