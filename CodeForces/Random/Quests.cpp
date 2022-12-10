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
const int MOD =1e9+7,S6=1e6+7,S5=1e5+7,S4=1e4+7,S3=1e3+7,S2=1e2+7,mm=1e18;
int n,c,d;
int bs(int a[],int n)
{
    int l=0,r=1e18;
    while(l<r)
    {
        bool f=0;
        int sum=0;
        int k=(l+r+1)/2;
        for(int i = 0 ; i < n and i < k ; i++)
        {
            sum+=a[i];
        }
        sum*=(d/k);
        for(int i = 0 ; i < n and i < d%k ; i++)
        {
            sum+=a[i];
        }
        f=sum>=c;
        if(f)l=k;
        else r=k-1;
    }
    return l;
}
signed main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>c>>d;
        int a[n];
        int mx=INT_MIN;
        int sum=0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(int i = 0 ; i < d and i < n ;i ++)
        {
                sum+=a[i];
        }
        int ans=bs(a,n);
        if(ans==0)cout<<"Impossible"<<"\n";
        else if(ans==mm)cout<<"Infinity"<<"\n";
        else cout<<ans-1<<"\n";
    }
}