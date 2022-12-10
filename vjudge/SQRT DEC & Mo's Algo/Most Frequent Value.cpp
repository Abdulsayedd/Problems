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
const int MOD =1e9+7,SIZ6=1e6+500,SIZ5=2e5+500,SIZ3=1e3+7;
int n,q,cans,cnt[SIZ6],ans[SIZ5],blk,arr[SIZ5];
int freq_of_freqs[SIZ6];
struct node
{
    int l,r,id;
    bool operator<(node sec)const
    {
        return make_pair(l/blk,r)<make_pair(sec.l/blk,sec.r);
    }
};
void add(int x)//change this
{
    freq_of_freqs[cnt[x]]--;
    cnt[x]++;
    freq_of_freqs[cnt[x]]++;
    if(cnt[x]>cans)cans=cnt[x];
}
void remove(int x)//change this
{
    if(!--freq_of_freqs[cnt[x]] and cnt[x]==cans)cans--;
    cnt[x]--;
    if(cnt[x])freq_of_freqs[cnt[x]]++;
}
void solve()
{
    cin>>n>>q;
    blk=ceil(sqrt(n+0.0));
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    vector<node>que(q);//(l,r,i)
    for(int i = 0 ; i <q ; i++)
    {
        cin>>que[i].l>>que[i].r;
        que[i].id=i;
    }
    sort(que.begin(),que.end());
    int mol=0,mor=-1;
    for(int i = 0 ; i < q ; i++)
    {
        int l=que[i].l,r=que[i].r;
        while(mol>l)add(arr[--mol]);
        while(mor<r)add(arr[++mor]);
        while(mol<l)remove(arr[mol++]);
        while(mor>r)remove(arr[mor--]);
        ans[que[i].id]=cans;
    }
    for(int i = 0 ; i < q ; i++)
        cout<<ans[i]<<"\n";
}
signed main (){
    pre;
    solve();
}