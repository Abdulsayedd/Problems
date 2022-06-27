#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    int arr[n];
    string x="UP";
    for(int &i : arr)cin>>i;
    if(n==1)
    {
        if(arr[0]==15)x="DOWN";
        if(arr[0]!=15 && arr[0]!=0)x="-1";
    }
    else
    {
        if(arr[n-2]>arr[n-1] && arr[n-1]!=0)x="DOWN";
        if(arr[n-2]<arr[n-1] && arr[n-1]==15)x="DOWN";
    }
    cout<<x;
}