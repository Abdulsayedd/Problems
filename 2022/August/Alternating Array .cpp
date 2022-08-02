#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;vector<ll>v(1008,0);set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int even_pos=0,even_neg=0,odd_pos=0,odd_neg=0;
int main (){
        pre;
        int n;cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            int h;cin>>h;
            if(!(i&1) && h<0)even_neg++;
            else if(!(i&1) && h>0)even_pos++;
            else if((i&1) && h>0)odd_pos++;
            else odd_neg++;
        }
        ll ans1,ans2;
        ans1=even_neg+odd_pos;
        ans2=even_pos+odd_neg;
        cout<<min(ans1,ans2);
}