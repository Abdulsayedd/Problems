//https://codeforces.com/group/UZxBcPr4qR/contest/248942/problem/C
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    int maxlen=1,len=1,mx=0;
    for(auto i : arr)
    {
        mx=max(i,mx);
    }
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==mx)
        {
            len++;
        }
        else len=1;
        maxlen=max(maxlen,len);
    }
    cout<<maxlen;
}