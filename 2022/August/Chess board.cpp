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
int main (){
        pre;
        int t;cin>>t;
        while(t--)
        {
            bool f = false;
            string arr[8];
            for(int i = 0 ; i < 8 ; i++)
            {
                cin>>arr[i];
            }
                for(int i = 0 ; i < 8 ; i++)
                {
                    for(int j = i+1 ; j < 8 ; j++)
                    {
                        char i0=arr[i][0],i1=arr[i][1],j0=arr[j][0],j1=arr[j][1];
                        if(i0==j0||i1==j1||abs(i0-j0)==abs(i1-j1))
                        {
                           f=true;
                           break;
                        }
                    }
                }
                cout<<(f?"Invalid":"Valid")<<"\n";
            }
}