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
bool chk(int a,int b,int c,int d,int e)
{
    if(a&&b&&c&&d&&e)return true;
    a--;b--;c--;d--;e--;
    if(a==-1)return false;
    if(b==-1)
    {
        if(a>=2)a-=2,b=0;
        else return false;
    }
    if(c==-1)
    {
        if(a>=1 && b>=1){a--;b--;c=0;}
        else if(a>=3){a-=3;c=0;}
        else return false;
    }
    if(d==-1)
    {
        if(a>=1 && c>=1){a--;c--;d=0;}
        else if(b>=2){b-=2;d=0;}
        else if(b>=1 && a>=2){b--;a-=2;d=0;}
        else if(a>=4){a-=4;d=0;}
        else return false;
    }
    if(e==-1)
    {
        if(a>=1 && d>=1){a--;d--;e=0;}
        else if(b>=1 && c>=1){b--;c--;e=0;}
        else if(c>=1 && a>=2){a-=2;c--;e=0;}
        else if(a>=1 && b>=2){a--;b-=2;e=0;}
        else if(a>=5){a-=5;e=0;}
        else return false;
    }
    return true;
}
int main (){
    pre;
        int t;cin>>t;
        while(t--)
        {
            string x;cin>>x;
            int a=0,b=0,c=0,d=0,e=0;
            for(char i : x)
            {
                if(i=='A')a++;
                else if(i=='B')b++;
                else if(i=='C')c++;
                else if(i=='D')d++;
                else if(i=='E')e++;
            }
            //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
            if(chk(a,b,c,d,e))cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
}