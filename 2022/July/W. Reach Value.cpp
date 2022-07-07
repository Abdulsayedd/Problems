//============================
// Name        : W. Reach Value
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/W
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool f = false;
void fun(long long n,long long ans)
{
    if(ans>n)return ;
    if(ans==n){/*cout<<ans<<"*\n";*/f=true;return ;}
    fun(n,ans*10);
    fun(n,ans*20);
}
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        f=false;
        long long n;cin>>n;
        if(n==1)cout<<"YES"<<"\n";
        else fun(n,1),f?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}