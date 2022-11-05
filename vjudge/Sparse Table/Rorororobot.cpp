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
const int N=2e5+7;
int table[22][N];
int n,m,q;
int _log(int x) {
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    return x ^ (x >> 1);
}

int merge(int x, int y) {
    return max(x,y);
}

int query(int s, int e) {
    int sz = e - s + 1;
    int ret = INT_MIN;
    for (int i = 0; i < 22; ++i) {
        if ((sz >> i) & 1) {
            ret = merge(
                    ret,
                    table[i][s]
            );
            s += (1 << i);
        }
    }
    return ret;
}
int queryOptim(int s, int e) {
    int msk = _log(e - s + 1);
    return merge(
            table[msk][s],
            table[msk][e - (1 << msk) + 1]
    );
}
void builtTable(int n, int arr[]) {
    for (int i = 0; i < n; ++i) {
        table[0][i] = arr[i]; /// size 2^0(=1)
    }
    for (int msk = 1; (1 << msk) <= n; ++msk) {
        for (int i = 0; i + (1 << msk) <= n; ++i) {
            table[msk][i] = merge(
                    table[msk - 1][i], /// start from i with size/2
                    table[msk - 1][i + (1 << (msk - 1))] /// start from i+sz/2 with size (sz/2)
            );
        }
    }
}
bool check(int x1,int y1,int x2,int y2,int k)
{
    int mxv=0;
    mxv=max(mxv,query(min(y1,y2),max(y1,y2)));
    int req;
    if(x1>=mxv)req=0;
    else req=mxv-x1;
    int jmp=req-(req%k)+k;
    if(req%k==0)jmp=req;
    if(x1+jmp>=n || (abs(y1-y2)%k)!=0 ||(abs((x1+jmp)-x2)%k)!=0 )return false;
    return true;
}
signed main (){
    pre;
    cin>>n>>m;
    int arr[m];
    for(int i = 0 ; i < m ; i++)
    {
        cin>>arr[i];
    }
    builtTable(m,arr);
    cin>>q;
    while(q--)
    {
        int x1,y1,x2,y2,k;
        cin>>x1>>y1>>x2>>y2>>k;
        x1--,y1--,x2--,y2--;
        cout<<(check(x1,y1,x2,y2,k)?"YES":"NO")<<"\n";
    }
}