#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << "\n";
const double PI = 3.14159265358979323846;
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        map<string,vector<int>>mp;
        int a=0,b=0,c=0;
        int n;cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            string x;cin>>x;
            mp[x].push_back(1);
        }
        for(int i = 0 ; i < n ; i++)
        {
            string x;cin>>x;
            mp[x].push_back(2);
        }
        for(int i = 0 ; i < n ; i++)
        {
            string x;cin>>x;
            mp[x].push_back(3);
        }
        for(auto i : mp)
        {
            if(i.second.size()==3)continue;
            else if(i.second.size()==2)
            {
                if(i.second[0]==1 || i.second[1]==1)a++;
                if(i.second[0]==2 || i.second[1]==2)b++;
                if(i.second[0]==3 || i.second[1]==3)c++;
            }
            else
            {
                if(i.second[0]==1)a+=3;
                if(i.second[0]==2)b+=3;
                if(i.second[0]==3)c+=3;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}