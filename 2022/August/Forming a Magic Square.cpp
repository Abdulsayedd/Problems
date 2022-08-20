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
int msq[8][9] =
{
        {8, 1, 6, 3, 5, 7, 4, 9, 2},
        {4, 3, 8, 9, 5, 1, 2, 7, 6},
        {2, 9, 4, 7, 5, 3, 6, 1, 8},
        {6, 7, 2, 1, 5, 9, 8, 3, 4},
        {6, 1, 8, 7, 5, 3, 2, 9, 4},
        {8, 3, 4, 1, 5, 9, 6, 7, 2},
        {4, 9, 2, 3, 5, 7, 8, 1, 6},
        {2, 7, 6, 9, 5, 1, 4, 3, 8}
};
int arr[9];
int main (){
    pre;
    for(int i = 0 ; i < 9 ; i++)cin>>arr[i];
    int mn=INT_MAX,c;
    for(int i = 0 ; i < 8 ;i++)
    {
        c=0;
        for(int j = 0 ; j < 9 ; j++)
        {
            c+=abs(msq[i][j]-arr[j]);
        }
        mn=min(c,mn);
    }
    cout<<mn<<"\n";
}