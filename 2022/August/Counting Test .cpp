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
vector<vector<int>>arr(26,vector<int>(10007,0));
/*
 * if(r>n)old occurence = r/n;
 * if(l>n && r>n)(r/n)-(l/n);
 * l = l%n;
 * r = r%n;
 * freq[char][r]-freq[char][l];
 */
int main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string x;cin>>x;
        for(char i = 'a'; i<='z' ;i++)
        {
            int c=0;
            for(int j = 0 ; j <= x.size() ; j++)
            {
                c+=(x[j]==i);
                arr[i-'a'][j+1]=c;
            }
        }
        /* for(char i = 'a' ; i <='z' ; i++)
           {
               cout<<i<<" ";
               for(int j = 0 ; j < x.size()+1 ; j++)
               {
                   cout<<arr[i-'a'][j]<<" ";
               }
               cout<<"\n";
           }*/
        while(m--)
        {
            ll ans=0;
            int l,r;
            char ch;
            cin>>l>>r>>ch;
            l--;
            int cha=ch-'a';
            r=max(l,r);
            l=min(l,r);
            ans=((r/n)*arr[cha][n]+arr[cha][r%n])-((l/n)*arr[cha][n]+arr[cha][l%n]);
            cout<<ans<<"\n";
        }
    }
}