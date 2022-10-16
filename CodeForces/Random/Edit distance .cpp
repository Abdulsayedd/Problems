#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;using namespace std;
typedef     tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define     pre                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     int                 long long
#define     itn                 long long
#define     ull                 unsigned long long
#define     all(x)              (x).begin(),(x).end()
#define     rall(x)             (x).rbegin(),(x).rend()
#define     fx(x)               fixed<<setprecision(x)
#define     split(x, ch, v)     stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define     lower(x)            for(int i=0;i<x.size();i++)x[i]|=' ';
#define     upper(x)            for(int i=0;i<x.size();i++)x[i]&='_';
#define     what(x)             cout << #x << " is " << x << endl;
#define     arr2d(arr, m, n)    for(int mm=0;mm<m;mm++){for(int nn=0;nn<n;nn++)cout<<arr[mm][nn]<<" ";cout<<'\n';}
#define     PI                  acos(-1)
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;int h;
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x,y;cin>>x>>y;
        int n,m;n=x.size()+3,m=y.size()+3;
        int arr[n][m];
        for(int i = 0 ; i < n ;i++)arr[0][i]=i;
        for(int i = 0 ; i < m ;i++)arr[i][0]=i;
        for(int i = 1 ; i <= x.size() ; i++)
        {
            for(int j = 1 ;j <= y.size() ; j++)
            {
                if(x[i-1]==y[j-1])arr[i][j]=arr[i-1][j-1];//diag
                else arr[i][j]=1L*min( {1L*arr[i-1][j], 1L*arr[i][j-1],1L*arr[i-1][j-1]})+1L;
            }
        }
        cout<<arr[x.size()][y.size()]<<"\n";
    }

}