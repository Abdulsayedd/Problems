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
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        char c;cin>>c;
        string x="";
        for(char i='a';i<=c;i++)x+=i;
        cout<<x;
        reverse(x.begin(),x.end());
        for(int i = 1 ; i <x.size(); i++)cout<<x[i];
        cout<<"\n";
    }
}