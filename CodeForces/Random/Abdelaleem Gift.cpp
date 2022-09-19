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
    int t;cin>>t;
    while(t--)
    {
        int day,fday;cin>>day>>fday;
        cout<<"Sun Mon Tue Wed Thr Fri Sat\n";
        for(int i = 1 ; i <fday ;i++)cout<<"*   ";
        int m=1;
        int d=fday-1;
        while(m!=day+1)
        {
            cout<<m;
            if(d==6)
            {
                if(m<=9)cout<<"  ";
                else cout<<" ";
            }
            else
            {
                if(m<=9)cout<<"   ";
                else cout<<"  ";
            }
            d++;
            if(d==7)
            {
                if(m<=day)cout<<"\n";
                d=0;
            }
            if(m==day)
            {
                if(d==0)break;
                while(true)
                {
                    if(d==6)
                    {
                        cout<<"*  ";
                        break;
                    }
                    cout<<"*   ";
                    d++;
                }
                cout<<"\n";
                break;
            }
            m++;
        }
    }
}