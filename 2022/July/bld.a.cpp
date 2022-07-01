#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]<0)cout<<arr[i]+1<<" ";
        else cout<<arr[i]<<" ";
    }
}