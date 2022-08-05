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
            int n,m;cin>>n>>m;
            if(n<m)cout<<-1<<"\n";
            else
            {
                int all=n/m;
                int rem=n%m;
                int arr[m];
                for(int i = 0 ; i < m ; i++)
                {
                    arr[i]=all;
                }
                for(int i = m-1; i >=0 ;i--)
                {
                    if(rem>0)
                    {
                        arr[i]++;
                        rem--;
                    }
                    if(!rem)break;
                }
                for(auto i : arr)cout<<i<<" ";
            }
            cout<<"\n";
        }
}