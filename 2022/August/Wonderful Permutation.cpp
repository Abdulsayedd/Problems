#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
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
        ll t;cin>>t;
        while(t--)
        {
            ll n,k;cin>>n>>k;
            ll arr[n],srt[n];
            for(ll i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
                srt[i]=arr[i];
            }
            sort(srt,srt+n);
            map<ll,bool>mp;
            for(ll i = 0 ; i < k ; i++)
            {
                mp[srt[i]]=true;
            }
            ll c=0;
            for(ll i = 0 ; i < k ; i++)
            {
                if(mp[arr[i]]==true)
                {
                    mp.erase(arr[i]);
                }
                else
                {
                    c++;
                }
            }
            cout<<c<<"\n";
        }
}