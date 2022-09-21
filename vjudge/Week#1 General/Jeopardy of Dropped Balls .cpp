#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
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
signed main (){
    pre;
        int n,m,k;cin>>n>>m>>k;
        int arr[n+1][m+1];
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= m ; j++)
                cin>>arr[i][j];
        while(k--)
        {
            int h;cin>>h;
            int i = 1;
            while(i<=n)
            {
                if(arr[i][h]==2)i++;
                else if(arr[i][h]==3)arr[i][h--]=2;
                else arr[i][h++]=2;
            }
            cout<<h<<" ";
        }
}