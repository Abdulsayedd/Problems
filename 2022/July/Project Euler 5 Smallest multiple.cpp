#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long lcm(int a, int b)
{
    return (a/gcd(a,b))*b;
}

int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long ans=1;
        for(int i = 1 ; i <= n ; i++)
        {
            ans=lcm(ans,i);
        }
        cout<<ans<<"\n";
    }

}