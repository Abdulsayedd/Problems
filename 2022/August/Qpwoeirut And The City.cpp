#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int main (){
        pre;
        int t;cin>>t;
        while(t--)
        {
            ll n;cin>>n;
            ll arr[n+1];
            ll c1=0,c2=0;
            for(ll i = 1 ; i <= n ; i++)
            {
                cin>>arr[i];
            }
            if(n&1)
            {
                for(ll i = 1 ; i <=n; i++)
                {
                    if(i>=n)break;
                    if(!(i&1))
                    {
                        ll mm=0;
                        c1+=max(mm,max(arr[i+1],arr[i-1])-arr[i]+1);
                    }
                }
                cout<<c1<<"\n";
            }
            else
            {
                for(ll i = 2 ; i <=n; i+=2)
                {
                    if(i>=n-1)break;
                    if(!(i&1))
                    {
                        ll mm=0;
                        c1+=max(mm,max(arr[i+1],arr[i-1])-arr[i]+1);
                    }
                }
                c2=c1;//3
                for(int i = n-1 ; i>=2; i-=2)
                {
                        ll mm=0;
                        c1-=max(mm,max(arr[i-2]+1,arr[i]+1)-arr[i-1]);
                        c1+=max(mm,max(arr[i-1]+1,arr[i+1]+1)-arr[i]);
                        c2=min(c2,c1);
                }
                cout<<c2<<"\n";
            }
        }
}