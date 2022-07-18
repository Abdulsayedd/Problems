#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    long long n,sum;cin>>n;
    sum=sqrt(n * 2 + 0.25) - 0.5;
    cout<<sum;
}