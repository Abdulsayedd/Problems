// Problem     : G. Marbles , https://codeforces.com/group/3jD9SzY31n/contest/247619/problem/G
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    unsigned long long n,m;cin>>n;
    m=((n*(n-1))>>1)+n;
    n<2?cout<<-1:cout<<m;
}

