//============================
// Name        : K. Max Number
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/K
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun(int arr[],int n,int mx)
{
    if(n==0){mx=max(arr[n],mx);cout<<mx;return ;}
    if(arr[n]>mx)fun(arr,n-1,arr[n]);
    else fun(arr,n-1,mx);
}
int main () {
    pre;
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    fun(arr,n-1,INT_MIN);
}