//============================
// Name        : A. Print Recursion
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (int n,string x)
{
    if(!n)return ;
    cout<<x<<"\n";
    return fun(n-1,x);
}
int main () {
    pre;
       int n;cin>>n;
       fun(n,"I love Recursion");
}