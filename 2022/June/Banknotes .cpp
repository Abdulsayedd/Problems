#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool srt(const pair<string,string>&a,const pair<string,string>&b)
{return (a.first<b.first);}
int main ()
{
    pre;
    long long n;cin>>n;
    long long n50=0,n20=0,n1=0;
    if(n>=50)
    {
        n50=n/50;
        n-=(n50*50);
    }
    if(n>=20)
    {
        n20=n/20;
        n-=(n20*20);
    }
        n1=n;
    cout<<n50+n20+n1;
}