//============================
// Name        : F. Print Even Indices
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/F
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (vector<int>v,int n)
{
    if(n<=0){cout<<v[n]<<" ";return ;}
    cout<<v[n]<<" ";
    fun(v,n-2);
}
int main () {
    pre;
        int n;
        cin >> n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){int h;cin>>h;v.push_back(h);}
        if(n%2==0)n-=2;
        else n--;
        fun(v,n);
}