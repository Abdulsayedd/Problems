#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
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
const int MOD = 1000000007;
vector<int> solve(int n)
{
    map<int,int>mp;
    while (n % 2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        mp[n]++;
    vector<pair<int,int>>v;
    for(auto i : mp)
    {
        v.push_back({i.first,i.second});
    }
    for(int i = 0 ; i <v.size() ; i++)
    {
        cout<<"("<<v[i].first<<"^"<<v[i].second<<")";
        if(i!=v.size()-1)cout<<'*';
    }
}

signed main (){
    pre;
    int n;cin>>n;
    solve(n);

}