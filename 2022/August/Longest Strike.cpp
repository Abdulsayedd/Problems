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
        int t;cin>>t;
        while(t--)
        {
            mp.clear();
            int n,k;cin>>n>>k;
            vector<int>nums;
            for(int i = 0 ; i < n ; i++)
            {
                int h;cin>>h;
                mp[h]++;
            }
            for(auto i : mp)
            {
                if(i.second>=k)nums.push_back(i.first);
            }
            if(nums.empty())cout<<-1<<"\n";
            else
            {
                int mx,l,last,r;mx=INT_MIN;
                l=r=last=nums[0];
                for(int i = 1 ; i < nums.size() ; i++)
                {
                    if(nums[i]-nums[i-1]==1 && nums[i]-last>mx)
                    {
                        r=nums[i];l=last;mx=r-l;
                    }
                    else if(nums[i]-nums[i-1]>1)
                    {
                        last=nums[i];
                    }
                }
              /*  for(auto i : nums)cout<<i<<" ";
                cout<<"\n";
                cout<<l<<" "<<r<<" "<<last<<" "<<mx<<"\n";*/
                cout<<l<<" "<<r<<"\n";
            }

        }

}