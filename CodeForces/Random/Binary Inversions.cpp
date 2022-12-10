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
bool cmp1(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
signed main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        int r1=0,l0=0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            if(!arr[i] and !l0)
            {
                l0=i;
            }
            if(arr[i])r1=i;
        }
        if(arr[0]==0)l0=0;
        if(arr[n-1]==1)r1=n-1;
        int c1,c2,c3,ans1,ans2,ans3;
        c1=c2=c3=ans1=ans2=ans3=0;
        for(int i = 0 ; i < n ; i++)
        {
            c1+=arr[i];
            ans1+=(arr[i]==0)*c1;
        }
        int lst=arr[r1];
        arr[r1]=0;
        for(int i = 0 ; i < n ; i++)
        {
            c2+=arr[i];
            ans2+=(arr[i]==0)*c2;
        }
        arr[r1]=lst;
        arr[l0]=1;
        for(int i = 0 ; i < n ; i++)
        {
            c3+=arr[i];
            ans3+=(arr[i]==0)*c3;
        }
        cout<<max({ans1,ans2,ans3})<<"\n";
    }
}