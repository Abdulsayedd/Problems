//============================
// Name        : J. Factorial
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/J
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
unsigned long long fun (int n)
{
    if(n==0)return 1;
    return n*fun(n-1);
}
int main () {
    pre;
        int n;cin>>n;
        cout<<fun(n);
}