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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;
int n,m;
bool vld(int i,int j)
{
    return i<n and j<m and i>=0 and j>=0;
}
signed main (){
    pre;
    char c;
    cin>>n>>m>>c;
    char arr[n][m];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin>>arr[i][j];
    set<char>s;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(arr[i][j]==c)
            {
                if(arr[i+1][j]!=c and arr[i+1][j]!='.' and vld(i+1,j))s.insert(arr[i+1][j]);
                if(arr[i][j-1]!=c and arr[i][j-1]!='.' and vld(i,j-1))s.insert(arr[i][j-1]);
                if(arr[i-1][j]!=c and arr[i-1][j]!='.' and vld(i-1,j))s.insert(arr[i-1][j]);
                if(arr[i][j+1]!=c and arr[i][j+1]!='.' and vld(i,j+1))s.insert(arr[i][j+1]);
            }
        }
    }
    cout<<s.size();
}