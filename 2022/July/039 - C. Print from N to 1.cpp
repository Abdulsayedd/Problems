//============================
// Name        : C. Print from N to 1
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/C
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (int n)
{
    if(!n)return ;
    cout<<" "<<n;
    return fun(n-1);
}
int main () {
    pre;
       int n;cin>>n;
       cout<<n;
       fun(n-1);
}