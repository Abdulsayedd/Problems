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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7,SIZ6=1e6+7;
bool prime[SIZ6];
void sieve()
{
    memset(prime,true,sizeof prime);
    for(int p=2;p*p<=SIZ6;p++)
    {
        if(!prime[p])continue;
        for(int i=p*p;i<=SIZ6;i+=p)prime[i]=false;
    }
    prime[1]=0;
}
signed main (){
    pre;
    sieve();
    int n;cin>>n;
    int c=0;
    while(n>=4)
    {
        for(int i = n ; ; i--)
        {
            if(prime[i] && prime[n-i])
            {
                n=abs(i-(n-i));
                c++;
                break;
            }
        }
    }
    cout<<c;

}