// https://codeforces.com/problemset/problem/6/C
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    int l=0,r=n-1;
    if(n==1){cout<<1<<" "<<0;return 0;}
    while(l<=r)
    {
        if(arr[l]>arr[r])
        {
            arr[l]-=arr[r];
            r--;
            if(l==r)
            {
                l++;break;
            }
        }
        else if(arr[l]<arr[r])
        {
            arr[r]-=arr[l];
            l++;
            if(l==r)
            {
                r--;break;
            }
        }
        else
        {
            l++;r--;
            if(l==r)
            {
               l++;break;
            }
        }
    }
    cout<<l<<" "<<n-r-1;
}