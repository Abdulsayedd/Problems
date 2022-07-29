#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int main (){
        pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        n*=3;
        char arr[3][n];
        for(int i = 0 ; i < 3; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin>>arr[i][j];
            }
        }
        ll mx=0;
        for(int i = 1 ; i < n-1 ; i++)
        {
            if(arr[1][i]!='X')continue;
            ll ans=0;
            ans+=arr[0][i]=='*';
            ans+=arr[0][i-1]=='*';
            ans+=arr[0][i+1]=='*';
            ans+=arr[1][i+1]=='*';
            ans+=arr[1][i-1]=='*';
            ans+=arr[2][i-1]=='*';
            ans+=arr[2][i]=='*';
            ans+=arr[2][i+1]=='*';
            mx=max(mx,ans*4);
        }
        cout<<mx<<"\n";
    }
}