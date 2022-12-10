#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
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
const int MOD =1e9+7,S6=1e6+7,S5=1e5+7,S4=1e4+7,S3=1e3+7,S2=1e2+7;
int n;
int memo[80][10][26];
string x;

int digit(int pos, int l, bool lock) {
    if(pos == n) return 1;
    if(memo[pos][l][lock] != -1) return memo[pos][l][lock];

    int ans=0;
    int k = lock ? x[pos]-'0' : 9;
    for(int i=l; i<=k; i++)
        ans += digit(pos+1,i,(lock && i==k));
    return memo[pos][l][lock] = ans;
}

void solve() {
    for(int i=1; i<n; i++) {
        if(x[i] < x[i-1]) {
            cout<<"-1"<<"\n";
            return;
        }
    }
    memset(memo,-1,sizeof memo);
    cout<<digit(0,0,true)-1<<"\n";
}
signed main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        cin>>x;
        n=x.size();
        solve();
    }
}