#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const ll MAX = 100007;
int main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        int qos=0,ques=0;
        for(char i : x)
        {
            qos+=(i=='(');
            qos-=(i==')');
            ques+=(i=='?');
            if(ques+qos==1)qos=1,ques=0;//diffr
        }
        if(abs(qos)==ques)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}