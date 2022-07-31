//============================
// Name        : P. Log2
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/P
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long fun(long long n)
{
    if(n<2)return 0;
    return 1+(fun(n/2));
}
int main () {
    pre;
    long long n;cin>>n;
    cout<<fun(n);
}