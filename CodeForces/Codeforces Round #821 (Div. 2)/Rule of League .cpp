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
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>val(n+1,0);
        if(x>y)swap(x,y);
        if(!x&&!y||x&&y||(n-1)%y!=0)
        {
            cout<<-1<<"\n";continue;
        }
        for(int i = 1 ; i <=n ;i+=(y+(i==1)))
        {
            if((n-i)+1>=y)val[i]=y;
            else break;
        }
        for(int i = 1 ; i<=n;i++)
        {
                if(val[i]>0)
                    while(val[i]--)
                        cout<<i<<" ";
        }
        cout<<"\n";
    }
}