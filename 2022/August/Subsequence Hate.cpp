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
signed main (){
    pre;
    //freopen("monsters.in","r",stdin);
    int t;cin>>t;
    while(t--)
    {
        int c1,c2,c3,c4,mn=INT_MAX;
        string x;cin>>x;
        for(int j = 0 ; j < x.size() ; j++)
        {
            c1=c2=c3=c4=0;
            for(int i = 0 ; i <= j ; i++)
            {
                c1+=x[i]=='0';//left ones
                c3+=x[i]=='1';//left zeros
            }
            for(int i = j+1 ; i<x.size();i++)
            {
                c2+=x[i]=='1';//right zeros
                c4+=x[i]=='0';//right ones
            }
            mn=min({mn,c1+c2,c3+c4});
        }
        cout<<mn<<"\n";
    }

}