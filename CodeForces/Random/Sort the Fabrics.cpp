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
bool compada(pair<string,pair<int,int>>p1,pair<string,pair<int,int>>p2)
{
    if(p1.first==p2.first)
    {
        return p1.second.second<p2.second.second;
    }
    return p1.first<p2.first;
}
bool compcha(pair<string,pair<int,int>>p1,pair<string,pair<int,int>>p2)
{
    if(p1.second.first==p2.second.first)
    {
        return p1.second.second<p2.second.second;
    }
    return p1.second.first<p2.second.first;
}
signed main (){
    pre;
    int t;cin>>t;
    for(int i1 = 1 ; i1 <= t ; i1++)
    {
        int n;cin>>n;
        vector<pair<string,pair<int,int>>>ada;
        vector<pair<string,pair<int,int>>>cha;
        for(int i =  0 ; i < n ;i++)
        {
            string color;
            int d,u;
            cin>>color>>d>>u;
            ada.push_back({color,{d,u}});
            cha.push_back({color,{d,u}});
        }
        sort(ada.begin(),ada.end(),compada);
        sort(cha.begin(),cha.end(),compcha);
        int c=0;
        for(int i = 0 ; i < n;i++)
        {
            c+=ada[i]==cha[i];
        }
        cout<<"Case #"<<i1<<": "<<c<<"\n";
    }
}