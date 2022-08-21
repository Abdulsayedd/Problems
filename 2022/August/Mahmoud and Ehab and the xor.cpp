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
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
bool comp(pair<int,pair<int,int>>p,pair<int,pair<int,int>>p1)
{
    return p.first>p1.first;
}
int arr[2000007];
signed main (){
    pre;
    int n,x;cin>>n>>x;
    if(n==2&&!x){cout<<"NO"<<"\n";return 0;}
    cout<<"YES\n";
    if(n==1)cout<<x;
    else if(n==2)cout<<0<<" "<<x;
    else
    {
        int xr=0;
        for(int i = 1;i<n-2;i++)
        {
            cout<<i<<" ";
            xr^=i;
        }
        xr^=262144;
        xr^=131072;
        xr^=x;
        cout<<"262144 131072 "<<xr;
    }

}