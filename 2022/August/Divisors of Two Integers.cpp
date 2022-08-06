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
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){cin>>arr[i];}
    sort(arr,arr+n);
    int n1,n2=INT_MIN;
    n1=arr[n-1];
    map<int,int>mp;
    for(auto i : arr)mp[i]++;
    for(auto i : mp)
    {
        if(n1%i.first==0)
        {
            if(i.second==2)
                n2=max(n2,i.first);
        }
    }
    for(auto i : mp)
    {
        if(n1%i.first!=0)
        {
            if(i.second==1)
                n2=max(n2,i.first);
        }
    }
    cout<<n1<<" "<<n2;

}