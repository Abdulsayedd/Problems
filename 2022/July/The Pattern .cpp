#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int arr[16]={0,1,2,3,11,12,13,4,10,15,14,5,9,8,7,6};
    long long n;cin>>n;
    for(int i = 0 ; i < 16 ; i ++)
    {
        if(i%4==0 && i)cout<<"\n";
        cout<<n-arr[i]<<" ";
    }

}