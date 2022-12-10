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
int n,SQ;
vector<int>arr;
vector<vector<int>>b;
//vector<int>qans;
void preprocess () {
    SQ = (int) ceil(sqrt(n * 1.0));
    b = vector<vector<int>>(SQ);
    //qans=vector<int>(SQ);
    for (int i = 0; i < n; i++) {
        b[i / SQ].push_back(arr[i]);
        //qans[i/SQ]=max(qans[i/SQ],arr[i]);//change this
    }
    for(auto &i : b)
    {
        sort(all(i));
    }
}
int query(int l,int r,int c)
{
    int ret=0;//change this
    int blk=l/SQ;
    while(l<=r)
    {
        if(l%SQ==0 and l+b[blk].size()<=r)
        {
            ret+=b[blk].end()-lower_bound(b[blk].begin(),b[blk].end(),c);
            blk++;
            l+=SQ;
        }
        else
        {
            ret+=arr[l]>=c;
            l++;
            blk=l/SQ;
        }
    }
    return ret;
}
void update(int i , int v)
{
    if(i>=n)return;
    int blk=i/SQ;
    //int id_blk=i%SQ;
    b[blk].erase(lower_bound(b[blk].begin(), b[blk].end(),arr[i]));
    b[blk].insert(upper_bound(b[blk].begin(), b[blk].end(),v),v);
    arr[i]=v;
}
signed main (){
    pre;
    cin>>n;
    arr=vector<int>(n);
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    preprocess();
    int q;cin>>q;
    while(q--)
    {
        bool p;
        int l,r,c;
        cin>>p>>l>>r;
        l--;
        if(!p)
        {
            r--;
            cin>>c;
            cout<<query(l,r,c)<<"\n";
        }
        else
        {
            if(l>=n)continue;
            update(l,r);
        }
    }
}