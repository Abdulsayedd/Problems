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
const ll MOD = 1000000007;
const ll MAX = 100007;
int main (){
        pre;
        string x;cin>>x;
        int k; cin>>k;
        int pos=0;
        while(k)
        {

            if(pos>=x.size())break;
            char mx=0;
            int mxpos=INT_MIN;
            int sz=x.size();
            int last=min(sz,pos+1+k);
            for(int i=pos+1; i<last ; i++)
            {
                if(x[i] > mx)
                {
                    mx=x[i];
                    mxpos=i;
                }
            }
            if(mx>x[pos])
            {
                for(int i = mxpos ; i> pos ; i--)
                {
                    swap(x[i],x[i-1]);
                    k--;
                }
            }
            pos++;
        }
        cout<<x<<"\n";
}