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
signed main (){
    pre;
    int n;cin>>n;
    int arr[n];
    int pref1[n+1];
    int pref2[n+1];
    pref1[0]=pref2[0]=0;
    for(int & i : arr)cin>>i;
    for(int i = 1 ; i <= n ; i++)pref1[i]=pref1[i-1]+arr[i-1];
    sort(arr,arr+n);
    for(int i = 1 ; i <= n ; i++)pref2[i]=pref2[i-1]+arr[i-1];
    int q,typ,l,r;cin>>q;
    while(q--)
    {
        cin>>typ>>l>>r;
        if(typ==1)cout<<pref1[r]-pref1[l-1];
        else cout<<pref2[r]-pref2[l-1];
        cout<<"\n";
    }
}