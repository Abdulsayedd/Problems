//============================
// Name        : C. Cheap Kangaroo
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/gym/101350/problem/C
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long t;cin>>t;
    while(t--)
    {
        long long n,n1;cin>>n;
        cin>>n1;
        long long ans=n1,sum=n1;
        for(int i = 1 ; i < n ; i++)
        {
            cin>>n1;
            sum+=n1;
            ans=__gcd(ans,n1);
        }
        cout<<sum<<" "<<ans<<"\n";
    }
}