//============================
// Name        : N. Sum of a Matrix
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/N
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun(int n , vector<int>&v,int i)
{
    if(n==0)return ;
    int h;cin>>h;
    v[i]+=h;
    fun(n-1,v,i+1);
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    vector<int>v;
    for(int i = 0 ; i < n*m ; i++)
    {
        int tmp;cin>>tmp;
        v.push_back(tmp);
    }
    fun(n*m,v,0);
    for(int i = 0 ; i < v.size() ; i++)
    {
        if((i+1)%m==0)cout<<v[i]<<"\n";
        else cout<<v[i]<<" ";
    }
}