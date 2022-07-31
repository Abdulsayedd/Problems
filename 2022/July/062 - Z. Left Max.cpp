//============================
// Name        : Z. Left Max
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/Z
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long c=0;
void fun(int i,int n,int arr[],int mx)
{
    cout<<mx<<" ";
    if(i+1==n)return ;
    fun(i+1,n,arr,max(mx,arr[i+1]));
}
int main () {
    pre;
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    fun(0,n,arr,arr[0]);
}