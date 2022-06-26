#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m,h=-1;cin>>n;m=n;
    int arr[n][n];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==n-1)h=i;
        }
    for(int i = 0 ; i < n ; i++)
        arr[h][i]==0?cout<<n<<" ":cout<<arr[h][i]<<" ";
}