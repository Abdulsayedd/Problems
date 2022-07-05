//============================
// Name        : A. Game 23
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/problemset/problem/1141/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int f=1;
int m1=-1;
bool fun(int n,int m,int h)
{
    if(n>m)return false;
    fun(n*2,m,h+1);
    fun(n*3,m,h+1);
    if(n==m && f==1){m1=h;f=0;return true;}
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    if(n==m)cout<<0;
    else
    {
        fun(n,m,0);
        cout<<m1;
    }

}