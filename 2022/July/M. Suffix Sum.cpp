//============================
// Name        : M. Suffix Sum
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/M
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun(int arr[],int n,long long sum,int m)
{
    if(m==0){cout<<sum;return ;}
    fun(arr,n-1,sum+arr[n],m-1);
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    fun(arr,n-1,0,m);
}