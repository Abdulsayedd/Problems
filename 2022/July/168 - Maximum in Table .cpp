// https://codeforces.com/group/UZxBcPr4qR/contest/249484/problem/G
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;cin>>n;
    int arr[10][10]={};
    for(int i = 0 ; i<n;i++)
    {
        for(int j  = 0 ; j < n ; j++)
        {
            if(i==0 ||j==0 )arr[i][j]=1;
            else arr[i][j]=arr[i][j-1]+arr[i-1][j];
        }
    }
    cout<<arr[n-1][n-1];
}