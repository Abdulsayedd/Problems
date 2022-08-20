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
long long fastpow(long long b, long long p) {
    if (!p) return 1;
    long long ans = fastpow(b, p >> 1);
    ans *= ans;
    if (p & 1) ans *= b;
    return ans;
}

int main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        ull n;cin>>n;
        bool turn=true;
        while(n>1)
        {
            if(!(n&(n-1)))n/=2;
            else
            {
                ull m=log2(n);
                m=fastpow(2,m);
                n-=m;
            }
            turn=!turn;
        }
        if(turn)
        {
            cout<<"Richard"<<"\n";
        }
        else cout<<"Louise"<<"\n";

    }
}