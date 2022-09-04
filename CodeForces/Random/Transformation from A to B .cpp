#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
#define first f
#define second s
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
int a,b;
bool bl=false;
vector<int>seq;
void dfs(int num)
{
    if(num<a)return ;
    seq.push_back(num);
    if(num==a)
    {
        cout<<"YES"<<"\n"<<seq.size()<<"\n";
        for(auto i = seq.rbegin();i!=seq.rend();i++)cout<<*i<<" ";
        bl=true;
        return ;
    }
    if(num%2==0)dfs(num/2);
    if(num%10==1)dfs(num/10);
}
signed main (){
    pre;
    cin>>a>>b;
    dfs(b);
    if(!bl)cout<<"NO";
}