#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;using namespace std;
typedef     tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define     pre                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     int                 long long
#define     itn                 long long
#define     ull                 unsigned long long
#define     all(x)              (x).begin(),(x).end()
#define     rall(x)             (x).rbegin(),(x).rend()
#define     fx(x)               fixed<<setprecision(x)
#define     split(x, ch, v)     stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define     lower(x)            for(int i=0;i<x.size();i++)x[i]|=' ';
#define     upper(x)            for(int i=0;i<x.size();i++)x[i]&='_';
#define     what(x)             cout << #x << " is " << x << endl;
#define     arr2d(arr, m, n)    for(int mm=0;mm<m;mm++){for(int nn=0;nn<n;nn++)cout<<arr[mm][nn]<<" ";cout<<'\n';}
#define     PI                  acos(-1)
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;int h;
int n,tc;
int arr1[SIZ3],arr2[SIZ3],memo[SIZ3][SIZ3],vis[SIZ3][SIZ3];
int dp(int i,int j,int sum)
{
    if(i==n)
    {
        if(i!=j)return 1e9;
        return 0;
    }
    int &ret=memo[i][j];
    if(vis[i][j]==tc)return ret;
    vis[i][j]=tc;
    ret= dp(i+1,i+1,0)+(sum+10+arr1[i])*arr2[i];
    ret= min(ret,dp(i+1,j,sum+arr1[i]));
    return ret;
}

signed main (){
    pre;
    int t;cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr1[i]>>arr2[i];
        }
        cout<<dp(0,0,0)<<"\n";
    }

}