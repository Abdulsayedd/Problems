//============================
// Name        : B. Print from 1 to N
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/B
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (int n,int i)
{
    if(i>n)return ;
    cout<<i<<"\n";
    return fun(n,i+1);
}
int main () {
    pre;
       int n;cin>>n;
       fun(n,1);
}