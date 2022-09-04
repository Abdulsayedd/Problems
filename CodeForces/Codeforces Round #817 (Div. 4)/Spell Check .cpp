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
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int T=0,ii=0,m=0,u=0,r=0;
        int n;cin>>n;
        string y;cin>>y;
        int c=0;
        if(y.size()!=5)cout<<"NO"<<"\n";
        else
        {
            for(int i = 0 ; i <y.size() ;i++)
            {
                if(y[i]=='T')T++;
                else if(y[i]=='i')ii++;
                else if(y[i]=='m')m++;
                else if(y[i]=='u')u++;
                else if(y[i]=='r')r++;
            }
            if(T==1 && ii==T && u==T && r==T && m==T )
                cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}