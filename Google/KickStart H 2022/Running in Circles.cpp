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
    int t;cin>>t;
    for(int i1=1 ; i1<=t ;i1++)
    {
        int l,n;cin>>l>>n;
        char dir,ch,ldir;
        int cur=0,h,ans=0;
        n--;
        cin>>h>>ch;
        dir=ch;
        cur=h;
        ans+=cur/l;
        cur%=l;
        while(n--)
        {
            cin>>h>>ch;
            if(dir==ch)
            {
                cur+=h;
                ans+=cur/l;
                cur%=l;
            }
            else
            {
                cur-=h;
                if(cur<=0)dir=ch;
                cur=abs(cur);
                if(cur/l==0)ans+=0;
                else ans+=cur/l;
                cur%=l;

            }
        }
        cout<<"Case #"<<i1<<": "<<ans<<"\n";
    }
}