#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool srt(const pair<string,string>&a,const pair<string,string>&b)
{return (a.first<b.first);}
int main ()
{
    pre;
    double long a,b,c;cin>>a>>b>>c;
    double long sum;
    sum=2*a;
    sum+=(3*b);
    sum*=5*c;
    cout<<fixed<<setprecision(6)<<sum;
}