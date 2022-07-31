#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    long long n,c=0;cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        c++;
        for(int j = i+1 ; j <=n ;j++)c+=i;
    }
    cout<<c<<"\n";
}

