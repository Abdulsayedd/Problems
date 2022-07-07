//============================
// Name        : A. Devu, the Singer and Churu, the Joker
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/contest/439/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    bool f = true;
    int sum=0;
    int c=0;
    for(int i = 0 ; i < n ; i++)
    {
        int h;cin>>h;
        sum+=h;
    }
    if((sum+(10*n)-10)>m)f=false;
        c=(m-sum)/5;
    f?cout<<c:cout<<-1;
}