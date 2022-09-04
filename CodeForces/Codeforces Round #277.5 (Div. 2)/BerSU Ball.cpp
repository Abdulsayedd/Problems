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
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int main (){
        pre;
        int n;cin>>n;
        int boys[n];
        for(int i = 0 ; i < n ; i++)cin>>boys[i];
        sort(boys,boys+n);
        int m;cin>>m;
        int girls[m];
        for(int i = 0 ; i < m ; i++)cin>>girls[i];
        sort(girls,girls+m);
        int c=0;
        if(n>=m)
        {
            for(int i = 0 ; i < m ; i++)
            {
                for(int j = 0 ; j < n ; j++)
                {
                    if(abs(girls[i]-boys[j])<=1)
                    {
                        c++;
                        girls[i]=-100;
                        boys[j]=-100;
                    }
                }
            }
        }
        else
        {
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    if(abs(boys[i]-girls[j])<=1)
                    {
                        c++;
                        boys[i]=-100;
                        girls[j]=-100;
                    }
                }
            }
        }
        cout<<c<<"\n";
}