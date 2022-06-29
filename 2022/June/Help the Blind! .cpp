#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool srt(const pair<string,string>&a,const pair<string,string>&b)
{return (a.first<b.first);}
int main ()
{
    pre;
    long long f,n,k;cin>>f>>n>>k;
    cout<<((f*n)+(k*(((f-1)*f))/2));
}