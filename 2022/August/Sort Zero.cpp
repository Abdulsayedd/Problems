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
bool fun(int arr[],int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(arr[i]>arr[i+1])return false;
    }
    return true;
}
int main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        set<int>mm;
        for(int i= 0 ; i < n ; i++)
        {
            cin>>arr[i];
            mm.insert(arr[i]);
        }
        if(n==1 || mm.size()==1 || mm.size()==0 || fun(arr,n))cout<<0<<"\n";
        else
        {
            unordered_map<int,int>mp;
            set<int>s;
            int pos=0;
            for(int i = n-1 ; i>=0 ; i--)
            {
                if(arr[i]>=arr[i-1])
                {
                    mp[arr[i]]=i+1;
                }
                else
                {
                    mp[arr[i]]=i+1;
                    pos=i-1;break;
                }
            }
            int mx=pos;
            for(int i = 0 ; i <= pos ; i++)
            {
                if(mp[arr[i]])
                {
                    mx=max(mx,mp[arr[i]]);
                }
                s.insert(arr[i]);
            }
            for(int i = pos ; i<mx; i++)
            {
                s.insert(arr[i]);
            }
            //cout<<mx<<"\n";
            //cout<<*s.begin()<<"\n";
            cout<<s.size()<<"\n";
        }
    }
}