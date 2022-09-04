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
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int main (){
    pre;
    int n;cin>>n;
    set<int>s;
    int freq[100007]={};
    int vis[100007]={};
    for(int i = 0 ; i < n ; i++)
    {
        int h;cin>>h;
        freq[h]++;
        s.insert(h);
    }
    bool f;
    while(true)
    {
        f=false;
        for(auto i : s)
        {
            if(freq[i]>0)
            {
                cout<<i<<" ";
                freq[i]--;
                f=true;
            }
        }
        if(!f)break;
        cout<<"\n";
    }

}