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
const int MOD = 1000000007;
auto div(string x)
{
    int sum=0;
    for(auto i : x)sum+=i-'0';

    pair<bool,bool>f={sum%3==0 && !((x[x.size()-1]-'0')&1),sum%9==0};
    if(f.first and f.second)return "6 9";
    else if(f.first)return "6";
    else if(f.second)return "9";
    return "-1";
}
signed main (){
    pre;
    //freopen("monsters.in","r",stdin);
    string x;cin>>x;
    cout<<div(x);
}