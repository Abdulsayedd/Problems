#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    unsigned long long sum=0;//count criminals
    int n,m;cin>>n>>m;int arr[n];m--;
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    int l,r;  l=r=m;  l--;r++; // pos neg
    if(arr[m]==1)sum++;
    while(l>=0 && r<n)
    {
        if (arr[l] == 1 && arr[r] == 1)sum += 2;
        l--;r++;
    }//after calc
    while(l>=0)sum+=arr[l],l--;
    while(r < n)sum+=arr[r],r++;
    cout<<sum;
}