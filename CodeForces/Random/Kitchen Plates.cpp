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
int pos[5]={};
vector<int>arr[5]={};
vector<int>ans;
void bfs()
{
    queue<int>q;
    for(int i = 0 ; i < 5 ; i++)//smallest
    {
        if(!pos[i])q.push(i);
    }
    while(q.size())
    {
        int cur=q.front();
        q.pop();
        ans.push_back(cur);
        for(auto i : arr[cur])
        {
            pos[i]--;
            if(!pos[i])q.push(i);
        }
    }
    if(ans.size()==5)
    {
        for(auto i : ans)cout<<(char)('A'+i);
    }
    else cout<<"impossible";
}
signed main (){
    pre;
/*    vector<char> arr[5]={};
    int pos[5]={};
    int h=5;
    bool f=true;
    while(h--)
    {
        string x;cin>>x;
        char big,sml;
        if(x[1]=='<')sml=x[0],big=x[2];
        else sml=x[2],big=x[0];
        pos[sml-'A']++;
        for(auto i : arr[sml-'A'])pos[i-'A']+=;
        arr[big-'A'].push_back(sml);
        for(auto i : arr[sml-'A'])
        {
            if(i-'A'==big-'A'){f=false;break;}
            arr[big-'A'].push_back(i);
        }
        if(!f)
        {
            cout<<"impossible";return 0;
        }
        else
        {

        }
    }
    for(auto i : pos)cout<<i<<" ";*/
    for(int i = 0 ; i < 5 ; i++)
    {
        string x;cin>>x;
        int sml,big;
        if(x[1]=='<')sml=x[0]-'A',big=x[2]-'A';
        else sml=x[2]-'A',big=x[0]-'A';
        pos[big]++;
        arr[sml].push_back(big);
    }
    bfs();
}