#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;vector<ll>v;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const int MAX = 256;
const ll mod=1000000007;
int main (){
         pre;
         int t;cin>>t;
         while(t--)
         {
            ll n,m;cin>>n>>m;
            int type=0;type+=(n%2);type+=(m%2);
            ll ans=LLONG_MAX;
            if(type==0)//all even
            {
                ans=min((n/2)*(m+1),(m/2)*(n+1));
            }
            else if(type==2)// all odd
            {
                ans=min(((n+1)/2)*(m),((m+1)/2)*(n));
            }
            else
            {
                ll rem=0;
                ll od,eve;
                if(n%2==0)
                {
                    eve=n;
                    od=m;
                    m++;
                    rem=n/2;
                }
                else
                {
                    od=n;
                    eve=m;
                    n++;
                    rem=m/2;
                }
                ans=min((n/2)*(m+1),(m/2)*(n+1));
                ans-=rem;
                if(od<eve)ans--;
            }
            cout<<ans<<"\n";
         }
}