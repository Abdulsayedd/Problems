#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m;cin>>n;m=n;
    unsigned long long sum=0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
        {
            cin>>m;
            if(i==j)sum+=m;
        }
    cout<<sum;
}