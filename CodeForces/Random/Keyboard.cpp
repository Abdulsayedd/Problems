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
signed main (){
    pre;
    int n,m,x;
    cin>>n>>m>>x;
    char arr[n][m];
    map<char,vector<pair<int,int>>>mp;
    map<char,bool>mp1;
    map<char,int>mp2;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='S')v.push_back({i,j});
            else mp[arr[i][j]].push_back({i,j});
            if(arr[i][j]!='S')
            {
                mp1[arr[i][j]]=true;
                mp1[arr[i][j]&'_']=true;
                mp[arr[i][j]&'_'].push_back({i,j});
            }
        }
    }
    int n1;cin>>n1;
    string str;cin>>str;
    set<char>s;
    for(char i : str)
    {
        mp2[i]++;
        s.insert(i);
    }
    str="";
    for(auto i : s)str+=i;
    int c=0;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(mp1.count(str[i])==0)
        {
            cout<<-1;return 0;
        }
        if(isupper(str[i]))
        {
            if(v.size()==0)
            {
                cout<<-1;return 0;
            }
            bool f=false;
            for(auto j : v)
            {
                for(auto l : mp[str[i]])
                {
                    int mm=abs(j.first-l.first),nn=abs(j.second-l.second);
                    if((mm*mm + nn*nn)<=x*x)
                    {
                        f=true;
                    }
                }
            }
            if(!f)
            {
                c+=mp2[str[i]];
            }
        }
    }
    cout<<c;
}