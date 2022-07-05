//============================
// Name        : R. Palindrome Array
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/R
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool is_palindrom(int arr[],int n,int c)
{
    if(n==c || abs(n-c)==1 && arr[n]==arr[c])return true;
    if(arr[n]==arr[c])return is_palindrom(arr,n-1,c+1);
    else return false;

}
int main () {
    pre;
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i< n ; i ++ )cin>>arr[i];
    is_palindrom(arr,n-1,0)?cout<<"YES":cout<<"NO";
}