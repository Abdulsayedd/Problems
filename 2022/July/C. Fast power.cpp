//============================
// Name        : C. Fast power
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/gA8A93jony/contest/269931/problem/C
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
const long long mod = 1000000007;
long long poww;
void fun(long long n,long long m,long long pw)
{
    if(m==0){poww=pw;return ;}
    if(m&1){pw=(pw*n)%mod;}
    n=(n*n)%mod;
    fun(n,m>>1,pw);
}
int main () {
    pre;
    long long n,m;cin>>n>>m;
    fun(n%mod,m,1);
    cout<<poww;
}