//============================
// Name        : Q. 3n + 1 sequence
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/Q
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long fun(long long n,long long c)
{
    if(n==1){c++;return c;}
    if(n&1)fun((3*n+1),c+1);
    else fun(n/2,c+1);
}
int main () {
    pre;
    long long n;cin>>n;
    cout<<fun(n,0);
}