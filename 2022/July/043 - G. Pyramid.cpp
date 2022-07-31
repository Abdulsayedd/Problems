//============================
// Name        : G. Pyramid
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/G
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (int n,int m)
{
    if(m==0)return ;
    for(int i = n-m+1 ; i < n ; i++)cout<<" ";
    for(int i = 0 ; i <= (n-m)*2;i++)cout<<"*";
    cout<<"\n";
    fun(n,m-1);
}
int main () {
    pre;
        int n;
        cin >> n;
        int m= n;
        fun(n,m);
}