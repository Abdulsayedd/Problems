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
int main () {
    pre;
    vector<int>v;
    for(int i =1 ; i <=100; i++)
    {
        v.push_back(i);
    }
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<n<<"\n";
        for(int i = 1 ; i <= n ; i++)
        {
            cout<<i<<" ";
            for(int j =0 ; j < n ; j++)
            {
                if(v[j]==i)continue;
                cout<<v[j]<<" ";
            }
            cout<<"\n";
        }
    }
}