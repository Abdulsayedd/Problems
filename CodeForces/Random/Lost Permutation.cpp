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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7,SIZ6=1e6+7;
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        bool f=false;
        bool ad=false;
        int n,lost;
        cin>>n>>lost;
        int freq[51]={};
        int mx=INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            int h;cin>>h;
            freq[h]=1;
            mx=max(mx,h);
        }
        for(int i=1 ; i<=mx ; i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                lost-=i;
            }
        }
        if(lost==0)cout<<"YES";
        else if(lost<0)cout<<"NO";
        else
        {
            for(int i = mx+1 ;;i++)
            {
                lost-=i;
                freq[i]=1;
                if(lost==0){f=true;break;}
                if(lost<0)break;
            }
            if(f)cout<<"YES";
            else cout<<"NO";
        }
        cout<<"\n";
    }
}