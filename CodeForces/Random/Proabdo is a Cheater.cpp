#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
int n,m;
signed main (){
    pre;
    cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    vector<int>v(2*1e5+7,0);
    while(m--)
    {
        int l,r;cin>>l>>r;
        if(l>r)swap(l,r);
        //what(l)what(r)
        l--;
        v[l]++;
        if(r<n)v[r]--;
    }
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    sort(v.rbegin(),v.rend());
    int ans=0;
    for(int i = 0;i<n;i++)
    {
        ans+=v[i]*arr[i];
    }
    cout<<ans<<"\n";
}