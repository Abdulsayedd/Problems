#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; i++){cin >> arr[i];mn=min(arr[i],mn);}
    cout<<mn;
}