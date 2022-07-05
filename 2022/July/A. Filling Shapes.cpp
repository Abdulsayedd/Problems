//============================
// Name        : A. Filling Shapes
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/contest/1182/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n ;cin>>n;
    if(!(n&1))n/=2;
    else {cout<<0;return 0;}
    unsigned long long sum=1;
    for(int i = 1 ; i <= n ; i++)
    {
       sum*=2;
    }
    cout<<sum;
}