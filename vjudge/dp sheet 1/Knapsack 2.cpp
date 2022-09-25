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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;
int n,W,sum;
itn w[101],v[101];
int memo[101][SIZ5];
int dp(int i,int summ)
{
    if(summ==0)return 0;
    if(summ<0||i==n)return (MOD+SIZ5);
    if(memo[i][summ]!=-1)return memo[i][summ];
    int opl,opp;
        opl=dp(i+1,summ);
        opp=dp(i+1,summ-v[i])+w[i];
    return memo[i][summ]=min(opl,opp);
}
signed main (){
    pre;
    cin>>n>>W;
    sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>w[i]>>v[i];
        sum+=v[i];
    }
    memset(memo,-1,sizeof memo);
    for(int i = sum; i>=0 ; i--)
    {
        int m=dp(0,i);
        //what(i)what(m)
        if(m<=W)
        {
            cout<<i;break;
        }
    }
}