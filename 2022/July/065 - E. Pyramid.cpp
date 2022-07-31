//============================
// Name        : E. Pyramid
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/gA8A93jony/contest/269931/problem/E
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void str(int n)
{
    if(n==0){return ;}
    cout<<"*";
    str(n-1);
}
void spc(int n)
{
    if(n==0)return ;
    cout<<" ";
    spc(n-1);
}
void fun(int n,int m)
{
    if(n==0)return ;
    spc(n-1);
    str((m-n+1)*2-1);
    cout<<"\n";
    fun(n-1,m);
}
int main () {
    pre;
    int n,m;cin>>n;m=n;
    fun(n,n);
}