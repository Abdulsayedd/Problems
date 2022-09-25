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
const itn pp=30007;
int n,m;
int penny[]={1,5,10,25,50};
int memo[5][pp];
int dp(int i,int cur)
{
    if(i==0)return 1;
    int &ret=memo[i][cur];
    if(~ret)return ret;
    int op1,op2;
    op1=op2=0;
    if(cur-penny[i]>=0)op1=dp(i,cur-penny[i]);
    op2=dp(i-1,cur);
    return ret=op1+op2;
}
signed main (){
    pre;
    memset(memo,-1,sizeof memo);
    while(cin>>n)
    {
        int c=dp(4,n);
        if(c==1)cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else cout<<"There are "<<c<<" ways to produce "<<n<<" cents change."<<endl;
    }
}