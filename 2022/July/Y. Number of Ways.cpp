//============================
// Name        : Y. Number of Ways
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/Y
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long c=0;
void fun(int n,int m)
{
    if(n==m){c++;return;}
    if(n>m){return;}
    fun(n+1,m);
    fun(n+2,m);
    fun(n+3,m);
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    fun(n,m);
    cout<<c;
}